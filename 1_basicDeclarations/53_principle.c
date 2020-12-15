// principle
// rate of interest
// time
#include <stdio.h>

int main() {
  int p,t;
  float r;

  printf("Input Data: \n");
  printf("p = ");
  scanf("%d", &p);
  printf(", r = ");
  scanf("%f", &r);
  printf("%%, t = ");
  scanf("%d", &t);
  printf("year\n");

  printf("Simple interest = %0.f\n", p * r / 100 * t);
  return 0;
}
