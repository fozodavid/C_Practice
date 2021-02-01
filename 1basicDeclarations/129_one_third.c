#include <stdio.h>
#define LENGTH 10

int main() {
  int nums[LENGTH];

  int input;
  printf("Input an integer (2-10)\n");
  scanf("%d", &input);

  int i = 0, k = input;
  while(i < LENGTH) {
    nums[i] = k;
    printf("array_nums[%d] = %d\n", i, nums[i]);

    k /= 3;
    i++;
  }

  return 0;
}
