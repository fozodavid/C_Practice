#include<stdio.h>
#define LENGTH 7

int main() {
  int nums[LENGTH];
  printf("Input 7 array elements:\n");

  int i = 0, temp;
  while (i < LENGTH) {
    scanf("%d", &temp);
    if (temp > 0) {
      nums[i] = temp;
    } else {
      nums[i] = 1;
    }
    i++;
  }
  printf("Array elements:\n");
  i = 0;
  while(i < LENGTH) {
    printf("array_nums[%d] = %d\n", i, nums[i]);
    i++;
  }
}
