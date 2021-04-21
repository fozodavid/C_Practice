#include <stdio.h>

int main() {
  int limit;
  printf("Test Data: ");
  scanf("%d", &limit);

  int i, k;
  for (i = 1; i <= 10; i++) {
    for (k = 1; k <= limit; k++) {
      printf("%2dX%2d = %3d ", k, i, i * k);
    }
    printf("\n");
  }

  return 0;
}
