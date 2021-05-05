#include <stdio.h>
#define LEN 11

void copy_arrs(int dest[], int src[]) {
  for (int i = 0; i < LEN; i++) {
    dest[i] = src[i];
  }
}

int main() {
  int arr[LEN] = {0};
  int temp[LEN] = {0};

  arr[0] = 1;

  int i, k, j;
  for (i = 0; i < LEN - 3; i++) {
    for (k = 1; k < LEN; k++) {
      temp[k] = arr[k - 1] + arr[k];
    }
    for (j = 1; j < LEN - i; j++) {
      printf("  ");
    }
    for (k = 0; k < LEN; k++) {
      if (temp[k] != 0) {
        printf("%2d  ", temp[k]);
      }
    }
    printf("\n");
    copy_arrs(arr, temp);
  }

  return 0;
}
