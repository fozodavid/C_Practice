#include <stdio.h>

int main() {
  int limit;
  printf("Test Data: ");
  scanf("%d", &limit);

  int sum = 0;
  int i;
  for (i = 1; i <= limit; i++) {
    sum += i;
  }
  printf("%2d, aggregate: %2d\n", limit, sum);
  return 0;
}
