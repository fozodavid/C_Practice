#include <stdio.h>

int get_largest(int arr[], int size) {
  int max = 0;
  if (max < arr[0]) max = arr[0];
  if (max < arr[size/2]) max = arr[size/2];
  if (max < arr[size-1]) max = arr[size-1];
  return max;
}

int main() {
  int arr1[3] = {1, 3, 9};
  int arr2[7] = {1, 9, 7, 11, 13, 2, 3};
  int arr3[9] = {2, 1, 9, 7, 11, 13, 1, 2, 3};

  printf("%d\n", get_largest(arr1, 3));
  printf("%d\n", get_largest(arr2, 7));
  printf("%d\n", get_largest(arr3, 9));


  return 0;
}
