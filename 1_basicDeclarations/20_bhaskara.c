#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;

  printf("Input the first number(a): \n");
  scanf("%f", &a);
  printf("Input the second number(b): \n");
  scanf("%f", &b);
  printf("Input the third number(c): \n");
  scanf("%f", &c);

  float rootplus = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
  float rootminus = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

  printf("\nRoot1 = %f\n", rootplus);
  printf("Root2 = %f\n", rootminus);

  return 0;
}
