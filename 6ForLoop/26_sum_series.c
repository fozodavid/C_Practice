#include <stdio.h>

int main() {
  int terms;
  printf("Factor: ");
  scanf("%d", &terms);


  int factor = 1;
  int sum = 0;
  int i;
  printf("1");
  for (int i = 0; i < terms; i++) {
    printf(" + %d", factor);
    sum += factor;
    factor = factor * 10;
    factor++;
  }

  printf("\nSum: %d", sum);

  return 0;
}
