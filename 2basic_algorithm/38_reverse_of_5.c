#include <stdio.h>
#define LEN 5

void print_arr(int arr[]) {
  printf("%d", arr[0]);
  int i = 1;
  while (i < LEN) {
    printf(", %d", arr[i]);
    i++;
  }
}

int reverse(int arr[]) {
  int temp[LEN];

  int i = 0;
  while(i < LEN) {
    temp[i] = arr[LEN - 1 - i];
    i++;
  }

  i = 0;
  while(i < LEN) {
    arr[i] = temp[i];
    i++;
  }

}

int main() {
  int arr[] = {1,2,3,4,5};
  printf("Elements in original array are: ");
  print_arr(arr);
  reverse(arr);
  printf("\nElements in reverse array are: ");
  print_arr(arr);
  return 0;
}
