#include <stdio.h>
#include <stdlib.h>

#define LENGTH 3

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
  int ints[LENGTH];
  int i = 0;
  printf("Input 3 integers: ");
  while (i < LENGTH) {
    scanf("%d", &ints[i]);
    i++;
  }

  printf("\n-----------------------------\n");
  printf("Original numbers: %d, %d, %d\n", ints[0], ints[1], ints[2]);
  qsort(ints, LENGTH, sizeof(int), cmpfunc);
  printf("Sorted numbers: %d, %d, %d\n", ints[0], ints[1], ints[2]);

  return 0;
}
