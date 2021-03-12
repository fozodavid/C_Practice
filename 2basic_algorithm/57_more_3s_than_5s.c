#include <stdio.h>
#define SIZE 10

int test(int array[], int size) {
  int i = 0;
  int count_3s = 0;
  int count_5s = 0;
  while (i < size) {
    if (array[i] == 3) count_3s++;
    if (array[i] == 5) count_5s++;
    i++;
  }
  return count_3s > count_5s;

}

int main() {
  int array1[SIZE] = {3,3,3,5,5,4,4,4,4,4};
  int array2[SIZE] = {3,3,5,5,5,4,4,4,4,4};

  printf("%d\n", test(array1, SIZE));
  printf("%d\n", test(array2, SIZE));
  return 0;
}
