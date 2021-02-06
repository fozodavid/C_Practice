#include <stdio.h>

int test(int a, int b) {
  return a % 10 == b % 10;
}

int main() {
  printf("%d\n", test(17, 16));
  printf("%d\n", test(17, 27));
  printf("%d\n", test(355, 98343945));
  printf("%d\n", test(4, 5));

  return 0;
}
