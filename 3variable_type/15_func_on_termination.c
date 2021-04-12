#include <stdio.h>
#include <stdlib.h>

void exit_func() {
  printf("This is from exit_func\n");
}

int main() {
  atexit(exit_func);
  printf("This is from main\n");
  return 0;
}
