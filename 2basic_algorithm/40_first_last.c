#include <stdio.h>
#define LEN 5

int main() {
  int arr[LEN] = {10,20,30,40,50};
  int new_arr[2] = {arr[0], arr[LEN - 1]};

  printf("Elements in original array are: ");
  printf("%d", arr[0]);
  int i = 1;
  while (i < LEN) {
    printf(", %d", arr[i]);
    i++;
  }

  printf("\nElements in new array: %d, %d\n", new_arr[0], new_arr[1]);
  return 0;
}
