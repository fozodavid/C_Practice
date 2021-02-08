#include <stdio.h>

int test(int a, int b) {
  int sum = a + b;
  if (sum >= 10 && sum <= 20) return 30;
  return sum;
}

int main() {
  printf("%d\n", test(10, 15));
  printf("%d\n", test(11, 20));
  printf("%d\n", test(10, 9));
  return 0 ;
}
