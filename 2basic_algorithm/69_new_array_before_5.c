#include <stdio.h>
#define LEN 5

int main() {
  int arr[LEN] = {1,2,3,4,5};

  int * ptr = malloc(sizeof(int) * 3);
  int * start = ptr;

  int i = 0, k = 0;
  while (i < LEN - 3) {
    if (arr[i + 3] == 5) {
      k = i;
      while (k < (i + 3)) {
        (*ptr) = arr[k];
        ptr++;
        k++;
      }
    }
    i++;
  }

  ptr = start;
  i = 0;
  while (i < 3) {
    printf("%d ", *ptr);
    ptr++;
    i++;
  }

  printf("\n");

  return 0;
}
