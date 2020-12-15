#include <stdio.h>

int main() {
  float dist;
  float fuel;

  printf("Input total distance in km: ");
  scanf("%f", &dist);
  printf("\n");

  printf("Input total fuel spent in liters: ");
  scanf("%f", &fuel);
  printf("\n");

  printf("Average consumption (km/lt) %.3f\n", dist / fuel);
  return 0;
}
