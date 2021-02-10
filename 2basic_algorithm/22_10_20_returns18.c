#include <stdio.h>

int test(int a, int b) {
  int in_10_20(int num) {
    return num >= 10 && num <= 20;
  }
  if ( in_10_20(a) || in_10_20(b)) return 18;
  return a + b;
}

int main() {

  printf("%d\n", test(5, 5));
  printf("%d\n", test(5, 10));
  printf("%d\n", test(20, 3));
  printf("%d\n", test(120, 121));
  
  return 0;
}
