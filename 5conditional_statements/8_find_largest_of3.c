#include <stdio.h>
#include <limits.h>


int main() {
  int arr[3];
  printf("Test Data: ");
  scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

  int i = 0;
  int max = INT_MIN, max_index;
  while (i < 3) {
    if (arr[i] > max) {
      max = arr[i];
      max_index = i + 1;
    }
    i++;
  }

  printf("The largest number is the %d.\n", max_index);

  return 0;
}
