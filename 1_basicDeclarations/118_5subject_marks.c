#include <stdio.h>
#define LENGTH 5

int main() {
  int temp;

  printf("Input five subject marks(0-100): \n");
  int i = 0, sum = 0;
  while (i < LENGTH) {
    scanf("%d", &temp);
    sum += temp;
    i++;
  }
  printf("Average marks = %.2f\n", (float)sum / LENGTH);
  return 0;
}
