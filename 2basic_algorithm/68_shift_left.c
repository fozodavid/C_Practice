#include <stdio.h>
#include <malloc.h>
#define LEN 5

void test(int arr[], int * ptr) {
  ptr = malloc(sizeof(int) * LEN);

  int i = 1;
  while (i < LEN) {
    ptr[i - 1] = arr[i];
    i++;
  }
}

int main() {
  int arr1[LEN] = {1,2,3,4,5};
  int arr2[LEN] = {1,2,3,4,5};
  int arr3[LEN] = {1,2,3,4,5};
  int * ptr = NULL;

  test(arr1, ptr);
  test(arr2, ptr);
  test(arr3, ptr);

  int i = 0;
  while (i < LEN) {
    printf("%d\n", ptr[i]);
    i++;
  }
  free(ptr);
  return 0;
}
