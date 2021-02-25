#include <stdio.h>

typedef struct {
  int arr[5];
  int size;
} MY_ARR;

int test(MY_ARR a, MY_ARR b) {
  return a.arr[0] == b.arr[0] || a.arr[a.size - 1] == b.arr[b.size - 1];
}

int main() {
  MY_ARR arr1 = {
    .arr = {1,2,3,4,2},
    .size= 5
  };

  MY_ARR arr2 = {
    .arr = {1,2,3,4,5},
    .size= 5
  };

  printf("%d\n", test(arr1, arr2));

  return 0;
}
