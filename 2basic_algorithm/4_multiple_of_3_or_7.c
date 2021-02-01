#include <stdio.h>

int test(int a) {
  return a % 3 == 0 || a % 7 == 0;
}

int main() {
  printf("%d\n", test(9));
  printf("%d\n", test(14));
  printf("%d\n", test(21));
  printf("%d\n", test(5));

  return 0;
}
