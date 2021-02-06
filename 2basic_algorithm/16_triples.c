#include <stdio.h>

int test(int array[], int size) {
  int i = 0;
  while (i < size) {
    if (i <= size - 2 && (array[i] == array[i+1]) && (array[i+1] == array[i+2])) {
      return 1;
    }
    i++;
  }
  return 0;
}

int main() {
  int array[6] = {1,2,3,4,4,4};
  int array2[6] = {1,2,3,4,5,6};
  int array3[6] = {1,2,2,2,5,6};

  printf("%d\n", test(array, 6));
  printf("%d\n", test(array2, 6));
  printf("%d\n", test(array3, 6));
  return 0;
}
