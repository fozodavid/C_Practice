#include <stdio.h>
#define LENGTH 6

int main() {
  int nums[LENGTH];
  printf("Input LENGTH numbers (integer values): ");

  int i = 0;
  while(i < LENGTH) {
    scanf("%d", &nums[i]);
    i++;
  }

  int max = -100000, pos = 0;
  i = 0;
  while (i < LENGTH) {
    if (nums[i] > max) {
      max = nums[i];
      pos = i + 1;
    }
    i++;
  }
  printf("Maximum value: %d\n", max);
  printf("Position %d\n", pos);


  return 0;
}
