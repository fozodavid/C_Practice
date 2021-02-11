#include <stdio.h>

// step 1: input
// step 2: add
// step 3: print

int main() {
  int length;
  printf("Input number of rows/columns:\n");
  scanf("%d", &length);

  int table[length + 1][length + 1];

  printf("Input the cell value\n\n");
  int i = 0, k;
  while (i < length) {
    k = 0;
    printf("Row %d input cell values\n", i);
    while (k < length) {
      scanf("%d", &table[i][k]);
      k++;
    }
    printf("\n");
    i++;
  }

  i = 0;
  int sum = 0;
  while (i < length) {
    k = 0;
    sum = 0;
    while (k < length) {
      sum += table[i][k];
      k++;
    }
    table[i][k] = sum;
    i++;
  }

  k = 0;
  while (k < length) {
    i = 0;
    sum = 0;
    while (i < length) {
      sum += table[i][k];
      i++;
    }
    table[i][k] = sum;
    k++;
  }

  i = 0;
  sum = 0;
  while (i < length) {
    sum += table[i][length];
    i++;
  }

  table[length][length] = sum;
  printf("sum %d\n", sum);

  printf("Result:\n");

  i = 0;
  while (i <= length) {
    k = 0;
    while (k <= length) {
      printf("%3d ", table[i][k]);
      k++;
    }
    printf("\n");
    i++;
  }
  return 0;
}
