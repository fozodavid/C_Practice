#include <stdio.h>

int main() {
  int cms;
  printf("Input the distance in cm: ");
  scanf("%d", &cms);

  printf("Distance of %.2f cms is = %.2f inches\n", (float)cms, (float)cms/2.54);
  return 0;
}
