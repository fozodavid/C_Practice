#include <stdio.h>

int in_range(int num) {
  return num >= 20 && num <= 30;
}

int test(int a, int b) {
  if (a == b || !in_range(a) || !in_range(b)) return 0;
  return a > b ? a : b;
}

int main() {

  printf("%d\n", test(20, 20));
  printf("%d\n", test(30, 20));
  printf("%d\n", test(20, 25));
  printf("%d\n", test(25, 28));
  printf("%d\n", test(19, 28));
  printf("%d\n", test(20, 48));


  return 0;
}
