#include <stdio.h>

#define LENGTH 5

int main() {

  int array[5];
  int number = 2;
  printf("Expected Output: \n");

  int prev = number;
  for (int i = 0; i < LENGTH; i++) {
    printf("n[%d] = %d\n", i, prev);
    prev *= 3;
  }
  return 0;
}
