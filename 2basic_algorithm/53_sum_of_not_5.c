#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 7

int test(int arr[], int size) {
  int i = 0;
  int sum = 0;
  char repr[20];
  while (i < size) {
    sprintf(repr, "%d", arr[i]);
    printf("%s\n", repr);
    i++;
  }
  return sum;
}

int main() {
  int array[LEN] = {1, 2, 3, 4, 5, 6, 7};

  printf("%d\n", test(array, LEN));
  return 0;
}
