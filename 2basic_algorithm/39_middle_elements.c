#include <stdio.h>
#define LEN 5

void print_arr(int arr[], int size) {
  printf("%d", arr[0]);
  int i = 1;
  while (i < size) {
    printf(", %d", arr[i]);
    i++;
  }
  printf("\n");
}

int main() {
  int arr1[] = {10,20,-30,-40,30};
  int arr2[] = {10,20,30,40,30};
  int new_arr[2];

  printf("Elements in the original array are:\n");
  print_arr(arr1, LEN);
  print_arr(arr2, LEN);
  printf("Elements in the new array are:\n");

  new_arr[0] = arr1[LEN / 2];
  new_arr[1] = arr2[LEN / 2];
  print_arr(new_arr, 2);

  return 0;
}
