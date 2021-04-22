#include <stdio.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  int i;
  int sum = 0;
  for (i = 2; i <= 2 * num; i += 2) {
    printf("%d ", i);
    sum += i;
  }
  printf("\nSum: %d\n", sum);
  return 0;
}
