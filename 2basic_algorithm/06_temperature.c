#include <stdio.h>

int test (int t1, int t2) {
  return t1 < 0 && t2 > 100;
}

int main() {
  printf("%d\n", test(10, 50));
  printf("%d\n", test(-2, 110));
  printf("%d\n", test(-10, 210));
  printf("%d\n", test(50, 50));

  return 0;
}
