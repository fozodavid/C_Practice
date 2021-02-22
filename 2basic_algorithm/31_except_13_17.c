#include <stdio.h>

int test(int a, int b, int c) {
  int calc (int num) {
    if (num == 13) return 13;
    if (num == 17) return 17;
    if (num <= 20 && num >= 10) return 0;
    return num;
  }

  int sum = 0;
  return calc(a) + calc(b) + calc(c);
}

int main() {
  printf("%d\n", test(10, 20, 17));
  printf("%d\n", test(1, 20, 17));
  printf("%d\n", test(13, 15, 17));

  return 0;
}
