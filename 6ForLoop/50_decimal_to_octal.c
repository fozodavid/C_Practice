#include <stdio.h>

int main() {
  int input;
  printf("Input: ");
  scanf("%d", &input);

  int digit = 0;
  for (int i = 10; i >= 0; i--) {
    digit = input / (int) pow(8.0, (double)i);
    input = input - digit * pow(8.0, (double)i);
    printf("%d", digit);
  }
  printf("\n");

  return 0;
}
