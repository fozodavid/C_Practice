#include <stdio.h>

// two given integers are in range 40...50 inclusive or both in the range 50...60

int test(int a, int b) {
  int in_40_50(int num) {
    return num >= 40 && num <= 50;
  }

  int in_50_60(int num) {
    return num >= 50 && num <= 60;
  }

  return in_40_50(a) || in_40_50(b) || (in_50_60(a) && in_50_60(b));
}

int main() {
  printf("%d\n", test(40, 50));
  printf("%d\n", test(50, 60));
  printf("%d\n", test(30, 50));
  printf("%d\n", test(20, 55));
  return 0;
}
