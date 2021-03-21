#include <stdio.h>
#define LEN 10

int test(int arr[]) {
  int appear_5_times = 0;
  int v5_adjacent = 0;
  
  int i = 0;
  int count = 0;
  while (i < LEN) {
    if (arr[i] == 5) {
      count++;
    } 
    i++;
  }

  if (count >= 5) appear_5_times = 1;

  i = 0;
  while (i < LEN - 1) {
    if (arr[i] == 5 && arr[i + 1] == 5) {
      v5_adjacent = 1;
      break;
    }
    i++;
  }

  return appear_5_times && !v5_adjacent;
}

int main() {
  int arr1[LEN] = {1,2,3,4,5,6,7,8,9,10};
  int arr2[LEN] = {5,1,5,1,5,1,5,1,5,10};
  int arr3[LEN] = {1,1,1,1,1,6,5,5,9,10};
  int arr4[LEN] = {5,5,5,1,5,1,5,1,5,10};

  printf("%d\n", test(arr1));
  printf("%d\n", test(arr2));
  printf("%d\n", test(arr3));
  printf("%d\n", test(arr4));
  return 0;
}
