#include <stdio.h>

int main() {
  int height;
  int width;
  printf("Provide height of the rectangle\n");
  scanf("%d", &height);
  printf("Provide width of the rectangle\n");
  scanf("%d", &width);

  printf("\nPerimeter of the rectangle is: %d inches\n", height * 2 + width * 2);
  printf("Area of the rectangle is: %d square inches\n", height * width);

  return 0;
}
