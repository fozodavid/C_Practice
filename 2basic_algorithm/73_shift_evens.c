#include <stdio.h>
#define LEN 9

int main() {
  int arr[LEN] = {1,2,5,3,5,4,6,9,11};

  int index = 0;
  int result[LEN];
  int i;
  for (i = 0; i < LEN; i++) {
    if (!(arr[i] % 2)) {
      result[index++] = arr[i];
    }
  }

  for (i = 0; i < LEN; i++) {
    if (arr[i] % 2) {
      result[index++] = arr[i];
    }
  }

  for (i = 0; i < LEN; i++) {
    printf("%d ", result[i]);
  }
  printf("\n");


/* Elements in new array are: 2, 4, 6, 3, 5, 1, 5, 9, 11 */


  return 0;
}
