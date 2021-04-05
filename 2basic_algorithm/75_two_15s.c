#include <stdio.h>
#define LEN 10


int test (int arr[]) {
  int v15_next = 0;
  for (int i = 0; i < LEN - 1; i++) {
    if (arr[i + 1] == 15 &&  arr[i] == 15) v15_next = 1;
  }
  return v15_next;
}

int main() {
  int arr1[LEN] = {1,2,3,4,15,6,7,8,9,10};
  int arr2[LEN] = {1,2,3,5,15,15,7,8,9,10};
  int arr3[LEN] = {1,2,3,8,5,6,7,8,15,15};

  printf("%d\n", test(arr1));
  printf("%d\n", test(arr2));
  printf("%d\n", test(arr3));

  return 0;
}
