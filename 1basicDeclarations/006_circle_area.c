#include <stdio.h>

#define PI 3.14

int main() {
  float radius;

  printf("Provide radius of the circle\n");
  scanf("%f", &radius);

  printf("\nPerimeter of the circle is: %f inches\n", 2 * radius * PI);
  printf("Area of the circle is: %f square inches\n", radius * radius * PI);

  return 0;
}
