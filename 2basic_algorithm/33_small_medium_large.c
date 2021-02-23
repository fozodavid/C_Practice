#include <stdio.h>

int test(int small, int medium, int large) {
  return medium - small == large - medium;
}

int main() {
  printf("%d\n", test(10,12,14));
  printf("%d\n", test(11,12,14));
  printf("%d\n", test(8,12,16));
  return 0;
}
