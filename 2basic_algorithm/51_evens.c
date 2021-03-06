#include <stdio.h>
#define LEN 7

int test(int arr[], int size) {
  int i = 0;
  int count = 0;
  while (i < size) {
    if(!(arr[i] % 2)) count++;
    i++;
  }
  return count;
}

int main() {
  int array[LEN] = {1, 2, 3, 4, 5, 6, 7};

  printf("%d\n", test(array, LEN));
  return 0;
}
