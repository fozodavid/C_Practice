#include <stdio.h>
#include <malloc.h>
#define LEN 5

int main() {

  int arr[LEN] = {0,1,2,3,4};
  int * ptr = malloc(sizeof(int) * LEN);
  int * start = ptr;

  int i = 1;
  while (i < LEN) {
    (*ptr) = arr[i];
    ptr++;
    i++;
  }

  i = 0;
  while (i < LEN) {
    printf("%d ", arr[i]);
    i++;
  }
  printf("\n");

  i = 0;
  ptr = start;
  while (i < LEN) {
    printf("%d ", *ptr);
    ptr++;
    i++;
  }
  printf("\n");

  ptr = start;
  free(ptr);

  return 0;
}

