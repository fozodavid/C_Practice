#include <stdio.h>
#define LEN 10

int main() {
  int arr[LEN] = {0,1,2,3,0,0,6,7,8,9};

  int * ptr = malloc(sizeof(int) * LEN);
  int * start = ptr;

  int zeros = 0;
  int i = 0;
  while (i < LEN) {
    if (arr[i] == 0) zeros++;
    i++;
  }

  i = 0;
  while (i < zeros) {
    *ptr = 0;
    ptr++;
    i++;
  }

  i = 0;
  while (i < LEN) {
    if (arr[i] != 0) {
      *ptr = arr[i];
      ptr++;
    }
    i++;
  }

  ptr = start;
  i = 0;
  while ( i < LEN) {
    printf("%d ", *ptr);
    ptr++;
    i++;
  }
  printf("\n");

  return 0;
}
