#include <stdio.h>
#define SIZE 5

int test(int array[], int size) {
  int i = 0, k = 0;
  int v3_5_later = 0;
  while (i < size - 2) {
    k = i;
    if (array[i] == 3 ) {
      while (k < size) {
        if (array[k] == 5) {
          v3_5_later = 1;
        }

        k++;
      }
    }
    i++;
  }
  return v3_5_later;
}


int main() {
  int array1[SIZE] = {0,3,5,5,4};
  int array2[SIZE] = {0,1,3,1,5};
  int array3[SIZE] = {0,5,1,1,5};

  printf("%d\n", test(array1, SIZE));
  printf("%d\n", test(array2, SIZE));
  printf("%d\n", test(array3, SIZE));
  return 0;
}


