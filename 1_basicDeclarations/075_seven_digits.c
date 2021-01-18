#include <stdio.h>

int main() {
  int num;
  printf("Input a seven digit number: ");
  scanf("%d", &num);

  int divider = 1000000;
  int current;
  printf("Output: ");
  while (divider != 0) {
    current = (num / divider) % (10);

    printf("%d ", current);
    divider /= 10;
  }
  return 0;
}
