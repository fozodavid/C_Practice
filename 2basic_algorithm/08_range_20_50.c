#include <stdio.h>

int in_range(int num) {
  return num >= 20 && num <= 50;
}

int test(int a, int b, int c) {
  return in_range(a) || in_range(b) || in_range(c);
}

int main() {
  printf("%d\n", test(1, 2, 3));
  printf("%d\n", test(22, 2, 3));
  printf("%d\n", test(22, 34, 3));
  printf("%d\n", test(20, 22, 50));
}
