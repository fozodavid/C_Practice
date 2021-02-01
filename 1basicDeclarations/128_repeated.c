#include <stdio.h>
#define LENGTH 10

int main() {
  int nums[LENGTH];

  int input;
  printf("Input an integer (2-10)\n");
  scanf("%d", &input);

  int i = 0, k = 0;
  while(i < LENGTH) {
    if (k == input) {
      k = 0;
    }
    nums[i] = k;
    printf("array_nums[%d] = %d\n", i, nums[i]);
    i++;
    k++;
  }

  return 0;
}
