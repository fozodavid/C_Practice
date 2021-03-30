#include <stdio.h>
#define LEN 10


int main() {
  int arr[LEN] = {1,2,3,4,5,6,7,8,9,10};
  int * ptr = malloc(sizeof(int) * LEN);
  int * start = ptr;

  int i = 0;
  int copy = 0;
  int size = 0;
  while (i < LEN) {
    if (copy) {
      * ptr = arr[i];
      size++;
      ptr++;
    }
    if (arr[i] == 5) {
      copy = 1;
    }
    i++;
  }

  ptr = start;
  i = 0;
  while (i < size) {
    printf("%d ", *ptr );
    ptr++;
    i++;
  }
  printf("\n");

  return 0;
}
