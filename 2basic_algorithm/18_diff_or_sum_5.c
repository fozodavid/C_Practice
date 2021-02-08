#include <stdio.h>

int test (int a, int b) {
  return
    a == 5 ||
    b == 5 ||
    b - a == 5 ||
    a - b == 5 ||
    b + a == 5;
}

int main() {
  printf("%d\n", test(5, 2));
  printf("%d\n", test(2, 5));
  printf("%d\n", test(10, 15));
  printf("%d\n", test(15, 10));
  printf("%d\n", test(2, 3));
  printf("%d\n", test(4, 2));
  return 0;
}
