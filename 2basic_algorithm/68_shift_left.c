#include <stdio.h>
#include <malloc.h>
#define LEN 5

void test(int arr[], int * ptr) {
  ptr = arr;
}

int main() {

  int arr[LEN] = {0,1,2,3,4};
  int * ptr = NULL;
  int * ptr2 = NULL;
  ptr = malloc(sizeof(int) * LEN);

  test(arr, ptr);

  int i = 0;
  while (i < LEN) {
    printf("%d\n", *ptr);
    ptr++;
    i++;
  }
  free(ptr);

  return 0;
}

