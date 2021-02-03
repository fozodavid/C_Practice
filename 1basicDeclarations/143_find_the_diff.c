#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LENGTH 8

int cmpfunc(const void * a, const void * b) {
  return ( *(int*)a - *(int*)b);
}

int main() {
  char input[LENGTH];
  int n[LENGTH];

  printf("Input an integer created by 8 numbers (0 to 9):\n");
  scanf("%s", input);

  int i = 0;
  while (i < LENGTH) {
    sscanf(input[i], "%d", &n[i]);
    i++;
  }

  qsort(n, LENGTH, sizeof(int), cmpfunc);

  int big = 0, small = 0;
  i = 0;
  while (i < LENGTH) {
    big += pow(10, i) * n[i];
    i++;
  }

  i = LENGTH - 1;
  int k = 0;
  while (i >= 0) {
    small += pow(10, i) * n[k];
    k++;
    i--;
  }

  printf("The difference between the largest integer and the smallest:\n%d - %d = %d",
      big, small, big - small);
}
