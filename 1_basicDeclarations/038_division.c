#include <stdio.h>

int main() {
  int x, y;
  printf("x: ");
  scanf("%d", &x);
  printf("y: ");
  scanf("%d", &y);

  printf("\nExpected Output: %.1f\n", (float)x / y);
  return 0;
}
