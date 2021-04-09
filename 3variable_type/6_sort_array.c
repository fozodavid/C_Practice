#include <stdio.h>
#define LEN 5

void sort_array(int * arr) {
// sort elements of an array
// bubble sort
//
// goes through the array, every iteration finishes one element earlier than before
// if a > b swap, else leave alone
  int temp; 
  int k;
  for (int i = 0; i < LEN; i++) {
    k = 0;
    while (k < LEN - i - 1) {
      if (arr[k] > arr[k + 1]) {
        temp = arr[k];
        arr[k] = arr[k+1];
        arr[k+1] = temp;
      }
      k++;
    }
  }
}


int main() {
  int arr[LEN];

  printf("Input 5 elements of an array:\n");
  int i = 0;
  while(i < LEN) {
    scanf("%d", &arr[i]);
    i++;
  }
  printf("\n");

  sort_array(arr);

  i = 0;
  while (i < LEN) {
    printf("%d ", arr[i]);
    i++;
  }
  printf("\n");
}
