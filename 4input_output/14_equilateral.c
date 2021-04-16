#include <stdio.h>

int main() {
  float a,b,c;
  printf("Test Data: ");
  scanf("%f %f %f", &a, &b, &c);

  if (a == b && b == c && c == a) printf("Equilateral\n");
  else if (a == b || b == c) printf("Isoscenes\n");
  else printf("Scalene\n");
  return 0;
}
