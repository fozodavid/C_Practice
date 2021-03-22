#include <stdio.h>
#define LEN 5

int test(int arr[]) {
  int i = 0, k = 0;
  int increasing3 = 0;
  while (i < LEN - 2) {
    if ((arr[i] == arr[i+1]-1) && (arr[i+1] == arr[i+2]-1)) {
      increasing3 = 1;
      break;
    }
    i++;
  }
  return increasing3;
}

int main() {
  int arr1[LEN] = {5,5,5,5,5};
  int arr2[LEN] = {5,4,1,2,3};
  int arr3[LEN] = {1,1,1,2,2};

  printf("%d\n", test(arr1));
  printf("%d\n", test(arr2));
  printf("%d\n", test(arr3));

  return 0;
}
