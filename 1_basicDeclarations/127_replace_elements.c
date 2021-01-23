#include <stdio.h>
#define LENGTH 8

int main() {
  int nums[LENGTH];

  printf("Input 8 array elements\n");
  int i = 0;
  while (i < LENGTH) {
    scanf("%d", &nums[i]);
    i++;
  }

  int temp;
  int k = LENGTH - 1;
  i = 0;
  while (i < LENGTH / 2) {
    temp = nums[i];
    nums[i] = nums[k];
    nums[k] = temp;
    i++;
    k--;
  }

  printf("Modified array:\n");
  i = 0;
  while(i < LENGTH) {
    printf("array_nums[%d] = %d\n", i, nums[i]);
    i++;
  }
}
