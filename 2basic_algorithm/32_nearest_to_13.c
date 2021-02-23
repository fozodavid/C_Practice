#include <stdio.h>

// 2 integers return the value nearest to 13 without going over
// 0 if both goes over

int test(int a, int b) {
  if (a > 13 && b > 13) return 0;
  if (a > 13) return b;
  if (b > 13) return a;
  return (a - 13 > b - 13) ? a : b;
}

int main() {
  printf("%d\n", test(5, 6));
  printf("%d\n", test(11, 12));
  printf("%d\n", test(14, 13));
  printf("%d\n", test(7, 4));

  return 0;
}
