#include <stdio.h>
#define SIZE 5

int test(int array[], int size) {
  int i = 0;
  int contains_3_next_to_3 = 0;
  int contains_5_next_to_5 = 0;
  while (i < size - 1) {
    if (array[i] == 3 && array[i + 1] == 3) contains_3_next_to_3 = 1;
    if (array[i] == 5 && array[i + 1] == 5) contains_5_next_to_5 = 1;
    i++;
  }
  return contains_3_next_to_3 || contains_5_next_to_5;

}

int main() {
  int array1[SIZE] = {0,2,3,5,4};
  int array2[SIZE] = {0,1,2,5,5};
  int array3[SIZE] = {0,3,5,1,1};

  printf("%d\n", test(array1, SIZE));
  printf("%d\n", test(array2, SIZE));
  printf("%d\n", test(array3, SIZE));
  return 0;
}

