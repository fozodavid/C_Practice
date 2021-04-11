#include <stdio.h>
#define LEN 10

int binary_search(int array[], int start, int end, int target) {

  printf("%d %d\n", start, array[start]);
  printf("%d %d\n", end, array[end]);
  printf("
  return 1;
  /* if (target == array[start]) return start; */
  /* if (target == array[end]) return end; */
  if (start > end) return -1;
  if (array[start + ((end - start) / 2)] > target) {
    return binary_search(array, ((end - start) / 2) + start, end, target);
  } else {
    return binary_search(array, start, ((end - start) / 2) + end, target);
  }
}


int main() {
  int array[LEN] = {1,2,3,4,5,6,7,8,9,10};
  int index = binary_search(array, 0, 9, 7);
  printf("%d", index);

  return 0;
}
