#include <stdio.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  if (num % 2) {
    printf("%d is an odd number\n", num);
  } else {
    printf("%d is an even number\n", num);
  }
  
  return 0;
}
