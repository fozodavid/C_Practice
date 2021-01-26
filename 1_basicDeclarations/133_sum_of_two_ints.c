#include <stdio.h>
#include <math.h>

int main() {
  int first, second;
  printf("Input two integer values:\n");
  scanf("%d %d", &first, &second);

  int sum = first + second;
  int i = 1, digits = 0;
  while(sum / i) {
    digits++;
    i *= 10;
  }
  printf("\nNumber of digits of the sum value of the said numbers:\n%d\n", digits);
  return 0;
}
