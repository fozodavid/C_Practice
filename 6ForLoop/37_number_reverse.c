#include <stdio.h>

int main() {
  int num = 12345; 
  int digit;
  int starts = 0;
  printf("Test Data: %d\n", num);

  for (int i = 10; i < 100000000; i *= 10) {
    digit = (num % i) / (i / 10);
    if (digit != 0) starts = 1;
    
    if (digit > 0 && starts) {
      printf("%d", digit);
    }
  }
  printf("\n");

  return 0;
}
