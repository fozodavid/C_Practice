#include<stdio.h>
#define LENGTH 7

int main() {
  int num;
  printf("Input the first element of the array:\n");
  scanf("%d", &num);

  int i = 0;
  while (i < LENGTH) {
    printf("array_nums[%d] = %d\n", i, num);
    num *= 2;
    i++;
  }
}
