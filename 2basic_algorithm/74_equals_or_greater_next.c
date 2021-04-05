#include <stdio.h>
#define LEN 10


int test (int arr[]) {
  int greater = 1;
  for (int i = 0; i < LEN - 1; i++) {
    if (arr[i + 1] < arr[i]) greater = 0;
  }
  return greater;
}

int main() {
  int arr1[LEN] = {1,2,3,4,5,6,7,8,9,10};
  int arr2[LEN] = {1,2,3,5,5,5,7,8,9,10};
  int arr3[LEN] = {1,2,3,8,5,6,7,8,9,10};

  printf("%d\n", test(arr1));
  printf("%d\n", test(arr2));
  printf("%d\n", test(arr3));

  return 0;
}
