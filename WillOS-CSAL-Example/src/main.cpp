#include "OS/OSThreadKernel.h"
#include "CSAL/CSAL_SHARED/threads_init.h"

void setup() {
  os_init();
  threads_list_init();
}

void loop() {
  os_suspend_thread(os_current_id());
  _os_yield();
}
