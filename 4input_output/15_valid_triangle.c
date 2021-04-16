#include <stdio.h>

int main() {
  float a, b, c;
  printf("Test Data: ");
  scanf("%f %f %f", &a, &b, &c);
  if (a + b + c == 180) printf("Valid triangle\n");
  else printf("Not a valid triangle\n");
  return 0;
}
