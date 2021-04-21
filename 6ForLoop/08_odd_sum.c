#include <stdio.h>

int main() {

  int limit;
  printf("Test Data: ");
  scanf("%d", &limit);

  int sum = 0;
  int i;
  for (i = 1; i < limit * 2; i += 2) {
    printf("%d ", i);
    sum += i;
  }
  printf("\nSum: %d\n", sum);
  return 0;
}
