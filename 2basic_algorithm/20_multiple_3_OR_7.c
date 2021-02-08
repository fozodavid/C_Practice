#include <stdio.h>

int test(int num) {
  return ((num % 7) || (num % 3)) && (!(num % 3) || !(num % 7));
}

int main() {
  printf("%d\n", test(3));
  printf("%d\n", test(7));
  printf("%d\n", test(14));
  printf("%d\n", test(21));
  return 0;
}
