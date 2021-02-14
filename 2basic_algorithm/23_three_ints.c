#include <stdio.h>

int test(int a, int b, int c) {
  return a + b == c;
}

int main() {
  printf("%d\n", test(10, 20, 30));
  printf("%d\n", test(10, 20, 29));
}
