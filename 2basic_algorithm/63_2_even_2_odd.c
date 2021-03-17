#include <stdio.h>
#define LEN 5

int test(int arr[], int size) {
  int v2_evens_or_2_odds = 0;
  int i = 0;
  while (i < size - 1) {
    if (arr[i] % 2 == arr[i+1] % 2) {
      v2_evens_or_2_odds = 1;
      break;
    }
    i++;
  }
  return v2_evens_or_2_odds;
}

int main() {
  int arr1[LEN] = {0,1,2,3,4};
  int arr2[LEN] = {0,1,1,3,4};
  int arr3[LEN] = {0,1,3,2,4};

  printf("%d\n", test(arr1, LEN));
  printf("%d\n", test(arr2, LEN));
  printf("%d\n", test(arr3, LEN));

  return 0;
}
