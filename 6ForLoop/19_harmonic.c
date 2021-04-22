#include <stdio.h>

int main() {
  float n;
  printf("Test Data: ");
  scanf("%f", &n);
  printf("%f\n", n);
  

  float sum = 0;
  int i;
  for (i = 1; i <= n; i++) {
    sum = sum + (1.0 / i);
  }

  printf("Sum of Series up to %.0f terms: %f\n", n, sum);
  return 0;
}
