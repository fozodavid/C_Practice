#include <stdio.h>

int test(int a) {
  return (a > 90 && a <= 100) || (a > 190 && a <= 200);
}

int main() {
  printf("%d\n", test(99));
  printf("%d\n", test(91));
  printf("%d\n", test(90));
  printf("%d\n", test(89));
  printf("%d\n", test(189));
  printf("%d\n", test(191));

  return 0;
}
