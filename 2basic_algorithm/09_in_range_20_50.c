#include <stdio.h>

int in_range(int num) {
  return num >= 20 && num <= 50;
}

int test(int a, int b) {
  return in_range(a) || in_range(b);
}

int main() {
  printf("%d\n", test(1, 2));
  printf("%d\n", test(22, 2));
  printf("%d\n", test(22, 34));
  printf("%d\n", test(20, 22));
}
