#include <stdio.h>

int main() {
  int terms;
  printf("terms: ");
  scanf("%d", &terms);

  int i, sq, sum = 0;
  for (i = 1; i <= terms; i++) {
    sq = i * i;
    printf("%d ", sq);
    sum += sq;
  }
  printf("\nSum: %d", sum);

  return 0;
}
