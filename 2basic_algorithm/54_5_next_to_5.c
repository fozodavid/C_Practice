#include <stdio.h>

int test(int arr[], int size) {
  int i = 0;
  int found = 0;
  while (i < size - 1) {
    if (arr[i] == 5 && arr[i + 1] == 5) {
      found = 1;
      break;
    } 
    i++;
  }
  return found;
}

int main() {
  int arr1[10] = {0, 1, 2, 3, 4, 5, 5, 7, 8, 9};
  int arr2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("%d\n", test(arr1, 10));
  printf("%d\n", test(arr2, 10));
  return 0;
}
