#include <stdio.h>
#define LEN 5

int main() {
  int * array;

  array = malloc(sizeof(int) * LEN);

  int i = 0;
  while (i < LEN) {
    printf("element %d: ", i);
    scanf("%d", &array[i]);
    i++;
  }

  printf("Values entered in the array are:\n");
  i = 0;
  while (i < LEN) {
    printf("%d ", array[i]);
    i++;
  }
  printf("\n");
  return 0;
}
