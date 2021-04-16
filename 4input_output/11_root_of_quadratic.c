#include <stdio.h>

int main() {
  float a, b, c;
  printf("Input x, y, c for quadratic equation: ");
  scanf("%f %f %f", &a, &b, &c);

  float sqrt_part = (b * b) - (4 * a * c);
  if (sqrt_part < 0) {
    printf("No solution\n");
    return 0;
  }
  float denominator = 2 * a * c;
  float x1 = (- b + sqrt(sqrt_part)) / denominator;
  float x2 = (- b - sqrt(sqrt_part)) / denominator;

  printf("x1: %.2f, x2: %.2f", x1, x2);
  return 0;
}
