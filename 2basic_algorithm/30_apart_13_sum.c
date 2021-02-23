#include <stdio.h>

int test(int a, int b, int c) {
  if (a == 13 || b == 13 || c == 13) return a + b + c - 13;
  return a + b + c;
}

int main() {
  printf("%d\n", test(10,11,12));
  printf("%d\n", test(10,11,13));
  return 0;
}
