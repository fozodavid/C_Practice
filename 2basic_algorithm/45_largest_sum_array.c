#include <stdio.h>

int main() {
  int arr1[3] = {10, 20, -30};
  int arr2[3] = {10, 20, 30};
  int arr_max[3];

  int i = 0;
  while (i < 3) {
    if (arr1[i] > arr2[i]) {
      arr_max[i] = arr1[i];
    }
    if (arr1[i] <= arr2[i]) {
      arr_max[i] = arr2[i];
    }
    i++;
  }

  i = 0;
  while (i < 3) {
    printf("%d\n", arr_max[i]);
    i++;
  }

  return 0;
}
