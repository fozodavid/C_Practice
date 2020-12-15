#include <stdio.h>
#include <math.h>

int main() {
  float x;
  int n;
  printf("Input the values of x and n:");
  scanf("%f %d", &x, &n);

  printf("x to power n=%.4f\n", pow(x, n));
  return 0;
}
