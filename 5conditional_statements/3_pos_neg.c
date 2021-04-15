#include <stdio.h>

int main() {
  int num;

  printf("Test Data: ");
  scanf("%d", &num);

  if (num > 0) {
    printf("%d is a positive number\n", num);
  } else if ( num < 0) {
    printf("%d is a negative number\n", num);
  }
  return 0;
}
