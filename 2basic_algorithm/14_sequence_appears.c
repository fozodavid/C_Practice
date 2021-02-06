#include <stdio.h>

int has_sequence(int seq[], int size) {
  int i = 0, result = 0;
  while(i < size) {
    if (i <= size -2 && seq[i] == 1 && seq[i + 1] == 2 && seq[i + 2] == 3) {
      result = 1;
      break;
    }
    i++;
  }
  return result;
}

int main() {
  int my_array[3] = {1,2,3};
  int my_array2[6] = {6,5,4,3,1,2};
  int my_array3[10] = {6,5,4,3,1,2,3,4,5,6};

  printf("%d\n", has_sequence(my_array, 3));
  printf("%d\n", has_sequence(my_array2, 6));
  printf("%d\n", has_sequence(my_array3, 10));

  return 0;
}
