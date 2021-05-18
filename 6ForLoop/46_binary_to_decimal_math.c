#include <stdio.h>
#include <math.h>

int main() {
  int input;
  printf("Input: ");
  scanf("%d", &input);

  int sum = 0;
  int digit = 0;
  for (int i = 0; i < 24; i++) {
    digit = input % 10;
    input /= 10;
    sum += digit * pow(2, i);
  }

  printf("%d\n", sum);
  return 0;
}
