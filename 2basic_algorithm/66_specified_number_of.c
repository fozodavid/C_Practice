#include <stdio.h>
#define LEN 5

int test (int arr[], int same_elems) {
  int sample = arr[0];
  int i = 0;
  int appears_start = 1;
  int appears_end = 1;
  while (i < same_elems) {
    if (arr[i] != sample) {
      appears_start = 0;
    }
    i++;
  }

  i = LEN - 1;
  while (i > LEN - 1 - same_elems) {
    if (arr[i] != sample) {
      appears_end = 0;
    }
    i--;
  }
  return appears_start && appears_end;
}

int main() {
  int arr1[LEN] = {1,1,2,1,1};
  int arr2[LEN] = {2,2,3,2,2};
  int arr3[LEN] = {1,2,3,4,5};

  printf("%d\n", test(arr1, 2));
  printf("%d\n", test(arr2, 2));
  printf("%d\n", test(arr3, 1));

  return 0;
}
