#include <stdio.h>

int main () {
  long a, b;
  printf("Input 1st number (positive or negative) : ");
  scanf("%ld", &a);
  printf("Input 2nd number (positive or negative) : ");
  scanf("%ld", &b);

  a = (a > 0) ? a : -a;
  b = (b > 0) ? b : -b;
  
  printf("The absolute value of 1st number is : %d\n", a);
  printf("The absolute value of 2nd number is : %d\n", b);
}
