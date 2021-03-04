#include <stdio.h>
#define LEN 6

int main() {
  int original[LEN] = {1, 5, 7, 9, 11, 13};
  int new_arr[2];
  
  new_arr[0] = original[(LEN / 2) - 1];
  new_arr[1] = original[LEN / 2];

  printf("New array: %d, %d\n", new_arr[0], new_arr[1]);
  return 0;
}
