#include <stdio.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  int i;
  int sum = 0;
  for (i = 1; i < num; i++) {
    if (num % i == 0) {
      printf("%d ", i);
      sum += i;
    }
  }

  printf("\nSum: %d\n", sum);
  if (sum == num) {
    printf("Perfect number");
  } else {
    printf("Not a perfect number");
  }

  return 0;
}
