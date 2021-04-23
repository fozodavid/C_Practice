#include <stdio.h>

int main() {
  int rows;
  printf("Test Data: ");
  scanf("%d", &rows);


  int count = 0;
  int i, k;
  for (i = 1; i <= rows; i++) {
    for (k = i; k < rows; k++) {
      printf(" ");
    }
    for (k = 1; k < (i * 4) - 1; k += 2) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}

