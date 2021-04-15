#include <stdio.h>

int main() {
  int a,b,c;
  printf("Input 3 numbers separated by comma: ");
  scanf("%d,%d,%d", &a, &b, &c);

  printf("The sum of 3 numbers: %d", a + b + c);

  return 0;
}
