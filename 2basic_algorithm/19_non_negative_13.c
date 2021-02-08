#include <stdio.h>

int test(int num) {
  return num >= 13 && (num % 13 == 0 || num % 13 == 1);
}

int main() {
  int i = 0;
  while (i <= 40) {
    printf("%2d: %d\n", i, test(i));
    i++;
  }
  return 0;
}
