#include <stdio.h>

int test(int a, int b) {
  return a % 10 == b % 10;
}

int main() {
  printf("%d\n", test(10, 20));
  printf("%d\n", test(30, 20));
  printf("%d\n", test(31, 20));

  return 0;
}
