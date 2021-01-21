#include <stdio.h>

int main() {
  int a, b, larger, smaller;
  printf("Input two pairs values (integer values): \n");
  scanf("%d", &a);
  scanf("%d", &b);

  smaller = a < b ? a : b;
  larger = a > b ? a : b;

  printf("\nSequence from the lowest to highest number: \n");
  int i = smaller, count = 0, sum = 0;
  while (i <= larger) {
    printf("%d ", i);
    sum += i;
    count++;
    i++;
  }

  printf("\nAverage value of the said sequence\n\t%.2f\n", (float)sum / count);
  return 0;
}
