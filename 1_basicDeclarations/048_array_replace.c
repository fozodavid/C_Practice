#include <stdio.h>

#define LEN 5

int main() {
  int array[LEN];

  printf("Input the 5 members of the array:\n");
  int i = 0;
  while (i < LEN) {
    scanf("%d", &array[i]);
    i++;
  }

  printf("Array values are:\n");
  for (i = 0; i < LEN; i++) {
    if(array[i] <= 0) {
      printf("n[%d] = 100\n", i);
    } else {
      printf("n[%d] = %d\n", i, array[i]);
    }
  }
  return 0;
}
