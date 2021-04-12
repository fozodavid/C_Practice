#include <stdio.h>
#define LEN 20

int binary_search(int array[], int start, int end, int target) {
  printf("Fired\n");
  if (target == array[start]) return start;
  if (target == array[end]) return end;
  if (start > end) return -1;
  if (array[start + ((end - start) / 2)] < target) {
    return binary_search(array, (((end - start) / 2) + start), end, target);
  } else {
    return binary_search(array, start, end - ((end - start) / 2), target);
  }
}


int main() {
  int array[LEN] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int index = binary_search(array, 0, 19, 15);
  printf("%d", index);

  return 0;
}
