#include <stdio.h>

int test(int num) {
  int mod10 = num % 10;
  return mod10 >= 8 || mod10 <= 2;
}

int main() {
  int i = 5;
  while (i <= 20) {
    printf("%d: %d\n", i, test(i));
    i++;
  }
  return 0;
}
