#include <stdio.h>
#define LENGTH 10

int main() {
  int nums[LENGTH];

  int input;
  printf("Input an integer (2-10)\n");
  scanf("%d", &input);

  int i = 0;
  while(i < LENGTH) {
    printf("array_nums[%d] = %d\n", i, nums[i]);
    i++;
  }

  return 0;
}
