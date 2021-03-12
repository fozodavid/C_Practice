#include <stdio.h>
#define SIZE 5

int test(int array[], int size) {
  int i = 0;
  int contains_3_or_5 = 0;
  while (i < size) {
    if (array[i] == 3 || array[i] == 5) contains_3_or_5 = 1;
    i++;
  }
  return contains_3_or_5;

}

int main() {
  int array1[SIZE] = {0,1,2,5,4};
  int array2[SIZE] = {0,1,2,2,4};

  printf("%d\n", test(array1, SIZE));
  printf("%d\n", test(array2, SIZE));
  return 0;
}
