#include <stdio.h>

void print_arr(int arr[], int size) {
  printf("%d", arr[0]);
  int i = 1;
  while (i < size) {
    printf(", %d", arr[i]);
    i++;
  }
}

int main() {
  int arr[] = {10,20,30,40};
  int size = 4;
  int copy[4];

  int i = 1;
  while (i < size) {
    copy[i - 1] = arr[i];
    i++;
  }
  copy[size - 1] = arr[0];

  printf("Elements in original array are: ");
  print_arr(arr, size);
  printf("\nElements in new array are: ");
  print_arr(copy, size);
  return 0;
}
