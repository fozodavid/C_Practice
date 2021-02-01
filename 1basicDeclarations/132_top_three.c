#include <stdio.h>
#include <stdlib.h>
#define LENGTH 8

int cmpfunc(const void * a, const void * b) {
  return ( *(int*)a - *(int*)b);
}

int main() {
  int buildings[LENGTH];

  printf("Input heights(integer values) of the top eight building:\n");
  int i = 0;
  while(i < LENGTH) {
    scanf("%d", &buildings[i]);
    i++;
  }

  qsort(buildings, LENGTH, sizeof(int), cmpfunc);
  
  printf("\nHeights of the top three buildings:\n%d\n%d\n%d\n", buildings[7], buildings[6], buildings[5]);
  return 0;
}
