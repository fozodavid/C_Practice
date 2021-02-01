#include <stdio.h>
#define LENGTH 5

int main() {
  int numbers[LENGTH];

  printf("Input the 5 members of the numbers: \n");
  int i;
  for (i = 0; i < LENGTH; i++) {
    scanf("%d", &numbers[i]);
  }

  int temp;

  temp = numbers[4];
  numbers[4] = numbers[0];
  numbers[0] = temp;

  temp = numbers[3];
  numbers[3] = numbers[1];
  numbers[1] = temp;

  printf("Expected Output: \n");
  for (i = 0; i < LENGTH; i++) {
    printf("array_n[%d] = %d\n", i, numbers[i]);
  }
  return 0;
}
