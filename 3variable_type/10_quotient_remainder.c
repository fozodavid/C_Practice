#include <stdio.h>
#include <stdlib.h>


int main() {
  ldiv_t output;
  long numerator, denominator;
  printf("Input numerator: ");
  scanf("%ld", &numerator);
  printf("Input denominator: ");
  scanf("%ld", &denominator);

  output = ldiv(numerator, denominator);

  printf("Quotient = %d, Remainder = %d\n", output.quot, output.rem);
  return 0;
}
