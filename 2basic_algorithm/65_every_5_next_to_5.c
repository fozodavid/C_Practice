#include <stdio.h>
#define LEN 15

// every 5 is next to another 5

int test(int arr[]) {
  int i = 1;
  int next_to_another_5 = 1;
  int v5_exists = 0;
  while (i < LEN - 1) {
    if (arr[i] == 5) {
      v5_exists = 1;
      next_to_another_5 = arr[i - 1] == 5 || arr[i + 1] == 5;
    }
    i++;
  }
  return v5_exists && next_to_another_5;
}

int main () {
  int arr1[LEN] = {5,5,1,1,1,5,5,1,1,1,5,5,5,2,3};
  int arr2[LEN] = {5,5,1,1,1,5,5,1,1,1,5,5,1,2,3};
  int arr3[LEN] = {5,4,1,1,1,2,1,1,1,1,5,1,5,2,3};
  int arr4[LEN] = {1,2,3,4,1,6,7,8,9,10,11,12,13,14,15};

  printf("%d\n", test(arr1));
  printf("%d\n", test(arr2));
  printf("%d\n", test(arr3));
  printf("%d\n", test(arr4));
}
