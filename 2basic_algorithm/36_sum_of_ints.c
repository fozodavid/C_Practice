#include <stdio.h>

int test(int arr[], int size) {
  int i = 0, sum = 0;
  while (i < size) {
    sum += arr[i];
    i++;
  }
  return sum;
}

int main() {
  int arr[] = {10,20,30,40,50};
  int size = 5;
  int arr2[] = {2,2,2,2,2};

  printf("%d\n", test(arr, size));
  printf("%d\n", test(arr2, size));


  return 0;
}
