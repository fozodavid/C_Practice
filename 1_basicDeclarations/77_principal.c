#include <stdio.h>

int main() {
  int principal;
  float rate;
  float days;
  // interest = principal * rate * days / 365;
  printf("Input load amount (0 to quit):");
  scanf("%d", &principal);
  if (!principal) return 0;
  printf("Input interest rate:");
  scanf("%f", &rate);
  if (!rate) return 0;
  printf("Input term of the load in days:");
  scanf("%f", &days);
  if (!days) return 0;
  printf("The loan amount is $%.2f\n", principal * rate * (days / 365.00));
  return 0;
}
