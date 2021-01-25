#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main() {
  time_t t;
  srand((unsigned) time(&t));
  int n;
  scanf("%d", &n);

  int nums[n];
  int i = 0;
  int min_index = n; 
  while (i < n) {
    nums[i] = rand() % 100;
    printf("array_nums[%d] = %d\n", i, nums[i]);
    if (min_index == n) min_index = i;
    if (nums[i] < nums[min_index]) min_index = i;
    i++;
  }
  printf("Minimum index is: %d with the value of %d",
    min_index,
    nums[min_index]
  );


  return 0;
}
