#include <stdio.h>

int main() {
  int a = 1, b = 100;

  while (b >= 0) {
    printf("a=%d\tb=%d\n", a, b);
    a += 5;
    b -= 10;
  }
  return 0;
}
