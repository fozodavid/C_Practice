#include <stdio.h>

int has_two_fives(int array[], int size) {
  int i = 0, count = 0;
  while (i < size) {
    if (i <= size - 1 && array[i] == 5 && (array[i+1] == 5 || array[i+1] == 6)) count++;
    i++;
  }
  return count;
}

int main() {

  int array[10] = {1,2,3,4,5,6,7,5,5,8};
  int array2[5] = {1,5,5,5,5};
  printf("%d\n", has_two_fives(array, 10));
  printf("%d\n", has_two_fives(array2, 5));


  return 0;
}
