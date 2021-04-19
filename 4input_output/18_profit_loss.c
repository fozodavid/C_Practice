#include <stdio.h>

int main() {
  int revenue, cost;
  printf("Test Data: ");
  scanf("%d %d", &cost, &revenue);

  printf("The profit amount: %d\n", revenue - cost);

  return 0;
}
