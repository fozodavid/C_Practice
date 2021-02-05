#include <stdio.h>

int test(int t1, int t2) {
  int in_range(int temp) {
    return temp >= 100 && temp <= 200;
  }
  return in_range(t1) || in_range(t2);
}

int main() {
  printf("%d\n", test(0, 0));
  printf("%d\n", test(100, 0));
  printf("%d\n", test(50, 110));
  return 0;
}
