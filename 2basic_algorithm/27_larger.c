#include <stdio.h>

int test(int a, int b) {
  if (a % 5 == b % 5) return a > b ? b : a;
  return a > b ? a : b;
}

int main() {
  printf("%d\n", test(11, 16));
  printf("%d\n", test(20, 11));
  printf("%d\n", test(0, 5));

  return 0;
}
