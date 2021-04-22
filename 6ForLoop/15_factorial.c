#include <stdio.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  int i;
  int fact = 1;
  for (i = 1; i <= num; i++) {
    fact *= i;
  }

  printf("Factorial: %3d\n", fact);

  return 0;
}
