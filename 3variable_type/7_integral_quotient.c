#include <stdio.h>

int main() {
  int num, denom;
  int quotient, remainder;
  printf("Input numerator : ");
  scanf("%d", &num);
  printf("Input denominator : ");
  scanf("%d", &denom);

  quotient = num / denom;
  remainder = num % denom;

  printf("quotient = %d, remainder = %d\n", quotient, remainder);
  // there is a function called ldiv for this

  return 0;
}
