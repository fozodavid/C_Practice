#include <stdio.h>

int main() {
  float height, width;
  printf("Input the height of the Rectangle: ");
  scanf("%f", &height);
  printf("Input the weight of the Rectangle: ");
  scanf("%f", &width);

  printf("Perimeter of the Rectangle is: %.2f\n", 2 * height + 2 * width);


  return 0;
}
