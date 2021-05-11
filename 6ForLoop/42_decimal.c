#include <stdio.h>
#include <math.h>

int main () {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  int result = 0;
  int decimal;
  int binary;
  for (int i = 5; i >= 0; i--) {
    decimal = (int)pow((double)10, (double)i);
    binary = (int)pow((double)2, (double)i);
    result += (num / decimal) * binary;
    num = num - ((num / decimal) * decimal);
  }
  printf("Decimal: %d\n", result);
}
