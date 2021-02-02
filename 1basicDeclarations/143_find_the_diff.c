#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LENGTH 8

int cmpfunc(const void * a, const void * b) {
  return ( *(int*)a - *(int*)b);
}

int main() {
  char numbers[LENGTH];

  printf("Input an integer created by 8 numbers (0 to 9):\n");
  int i = 0;
  scanf("%", numbers);
  printf("before qsort: %s\n", numbers);

  qsort(numbers, LENGTH, sizeof(char), cmpfunc);
  printf("after qsort: %s\n", numbers);

  int big = 0, small = 0;
  i = 0;
  while (i < LENGTH) {
    big += pow(10, i) * (int)numbers[i];
    i++;
  }

  i = LENGTH - 1;
  int k = 0;
  while (i >= 0) {
    small += pow(10, i) * (int)numbers[k];
    k++;
    i--;
  }

  printf("The difference between the largest integer and the smallest:\n%d - %d = %d",
      big, small, big - small);
}
