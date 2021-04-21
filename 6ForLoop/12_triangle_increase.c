#include <stdio.h>

int main() {
  int rows;
  printf("Test Data: ");
  scanf("%d", &rows);


  int count = 0;
  int i, k;
  for (i = 1; i <= rows; i++) {
    for (k = 1; k <= i; k++) {
      count++;
      printf("%2d ", count);
    }
    printf("\n");
  }

  return 0;
}
