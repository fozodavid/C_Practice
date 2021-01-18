#include <stdio.h>
#include <malloc.h>
#include <limits.h>

int main() {
  size_t length;
  // int * numbers;

  printf("Input the length of the array: \n");
  scanf("%zd", &length);
  int numbers[length];// = malloc(sizeof(int) * length);

  printf("Input the array elements: \n");

  for(int i = 0; i < length; i++) {
    scanf("%d", &numbers[i]);
  }

  int min = INT_MAX;
  int pos;
  for(int i = 0; i < length; i++) {
    if (min > numbers[i]) {
      min = numbers[i];
      pos = i;
    }
  }

  printf("Smallest Value: %d\n", min);
  printf("Position of the element: %d\n", pos);

//  free(numbers);

  return 0;
}
