#include <stdio.h>
#define LENGTH 7

int main() {
  int numbers[LENGTH];
  printf("Input 7 integers:\n");

  int i = 0;
  while (i < LENGTH) {
    scanf("%d", &numbers[i]);
    i++;
  }

  int evens = 0, odds = 0, pos = 0, neg = 0;

  i = 0;
  while (i < LENGTH) {
    if (numbers[i] > 0) pos++;
    if (numbers[i] < 0) neg++;
    if (numbers[i] % 2 == 0) evens++;
    if (numbers[i] % 2 != 0) odds++;

    i++;
  }

  printf("Number of even values: %d\n", evens);
  printf("Number of odd values: %d\n", odds);
  printf("Number of positive values: %d\n", pos);
  printf("Number of negative values: %d\n", neg);
  return 0;
}
