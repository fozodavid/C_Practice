#include <stdio.h>
#define LENGTH 5

int main() {
  int array[LENGTH];

  printf("Input the members of the array: \n");
  int i;
  for (i = 0; i < LENGTH; i++) {
    scanf("%d", &array[i]);
  }

  printf("Expected Output: \n");
  for (i = 0; i < LENGTH; i++) {
    if (array[i] < 5) {
      printf("A[%d] = %d\n", i, array[i]);
    }
  }

  return 0;
}
