#include <stdio.h>

int test(int array[], int size) {
  int i = 0;
  int sum_of_5s = 0;
  while (i < size) {
    if (array[i] == 5) sum_of_5s += 5;
    i++;
  }
  return sum_of_5s == 15;
}

int main() {
  int array1[10] = {0,1,2,3,5,5,5,2,3,6};
  int array2[10] = {0,1,2,3,4,5,5,2,3,6};

  printf("%d\n", test(array1, 10));
  printf("%d\n", test(array2, 10));
  return 0;
}
