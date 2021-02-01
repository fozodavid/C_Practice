#include <stdio.h>
#define LENGTH 7

int main() {
  int nums[LENGTH];

  printf("Input 7 array elements:\n");
  int i = 0;
  while (i < LENGTH) {
    scanf("%d", &nums[i]);
    i++;
  }

  printf("Array positions that store a value less or equal to 0:\n");
  i = 0;
  while (i < LENGTH) {
    if (nums[i] <= 0) {
      printf("array_nums[%d] = %d\n", i, nums[i]);
    }
    i++;
  }
}
