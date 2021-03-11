#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 7

int test(int arr[], int size) {
  char *pos = NULL;
  int sum = 0;
  char repr[20];
  int i = 0;
  while (i < size) {
    sprintf(repr, "%d", arr[i]);
    pos = strchr(repr, '5');
    if (!pos) sum += arr[i];
    i++;
  }
  return sum;
}

int main() {
  int array[LEN] = {1, 1, 1, 1, 5, 15, 1};

  printf("%d\n", test(array, LEN));
  return 0;
}
