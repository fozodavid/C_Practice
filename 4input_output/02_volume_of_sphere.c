#include <stdio.h>

int main() {
  float radius;
  printf("Input radius of sphere:\n");
  scanf("%f", &radius);
  float volume = (4 * 3.1415 * radius * radius * radius) / 3;

  printf("\nThe volume of a sphere is %f\n", volume);
  return 0;
}
