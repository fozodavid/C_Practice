#include <stdio.h>

int main() {
  int rows;
  printf("Test Data: ");
  scanf("%d", &rows);


  int i, k;
  for (i = 1; i <= rows; i++) {
    for (k = 1; k <= i; k++) {
      printf("%d", k);
    }
    printf("\n");
  }

  return 0;
}
