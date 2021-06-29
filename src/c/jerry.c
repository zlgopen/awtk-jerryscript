#include <string.h>
#include "jerry_script_helper.h"

#include "tkc/fs.h"
#include "tkc/str.h"
#include "tkc/mem.h"
#include "tkc/utils.h"
#include "tkc/time_now.h"
#include "tkc/platform.h"

static ret_t jerry_script_eval(const char* script, uint32_t size, const char* filename,
                               uint32_t times) {
  ret_t ret = RET_FAIL;
  jerry_value_t parsed_code;
  return_value_if_fail(script != NULL && size > 0, RET_NOT_FOUND);

  parsed_code = JERRY_PARSE((jerry_char_t*)script, size, NULL);

  if (jerry_value_check(parsed_code) == RET_OK) {
    uint32_t i = 0;
    for (i = 0; i < times; i++) {
      jerry_value_t ret_value = jerry_run(parsed_code);
      ret = jerry_value_check(ret_value);
      if (ret == RET_OK) {
        jerry_release_value(ret_value);
      }
    }
  }

  jerry_release_value(parsed_code);

  return ret;
}

int main(int argc, char* argv[]) {
  uint32_t times = 1;
  const char* code = NULL;
  platform_prepare();

  if (argc > 2) {
    uint64_t start = time_now_us();
    jerry_init(JERRY_INIT_EMPTY);
    code = argv[1];
    times = tk_atoi(argv[2]);

    jerry_script_eval(code, strlen(code), "test.js", times);
    printf("%d times cost: %d\n", (int)times, (int)(time_now_us() - start));
  } else {
    printf("Usage: %s code times\n", argv[0]);
  }

  return 0;
}
