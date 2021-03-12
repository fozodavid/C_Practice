#include <stdio.h>
#define SIZE 5

int test(int array[], int size) {
  int i = 0;
  int v5_next_to_5 = 0;
  int v5_almost_next_to_5 = 0; // separated by one element
  while (i < size - 2) {
    if (array[i] == 5 && array[i + 1] == 5) v5_next_to_5 = 1;
    if (array[i] == 5 && array[i + 2] == 5) v5_almost_next_to_5 = 1;
    i++;
  }
  return v5_next_to_5 || v5_almost_next_to_5;

}

int main() {
  int array1[SIZE] = {0,2,5,5,4};
  int array2[SIZE] = {0,1,5,1,5};
  int array3[SIZE] = {0,5,1,1,5};

  printf("%d\n", test(array1, SIZE));
  printf("%d\n", test(array2, SIZE));
  printf("%d\n", test(array3, SIZE));
  return 0;
}


