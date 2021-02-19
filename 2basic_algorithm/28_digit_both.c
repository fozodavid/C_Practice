#include <stdio.h>

int test(int a, int b) {
  return 1;
}

int main() {
  printf("%d\n", test(11, 16));
  printf("%d\n", test(20, 11));
  printf("%d\n", test(0, 5));

  return 0;
}
