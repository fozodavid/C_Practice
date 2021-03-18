#include <stdio.h>
#define LEN 10

int test(int arr[]) {
  int appear_5_times = 0;
  int v5_adjacent = 0;
  
  int i = 0, k = 0;
  int count = 0;
  int selected = 0;
  while (i < LEN) {
    selected = arr[i];
    k = i;
    count = 1;
    while (k < LEN && !appear_5_times) {
      if (arr[k] == selected) {
        count++;
        if (count == 5) appear_5_times = 1;
        break;
      } 
      k++;
    }
    i++;
  }

  i = 0;
  while (i < LEN - 1) {
    if (arr[i] == 5 && arr[i + 1] == 5) {
      v5_adjacent = 1;
      break;
    }
    i++;
  }

  printf("%d %d\n", appear_5_times, v5_adjacent);
  return appear_5_times && !v5_adjacent;

}

int main() {
  int arr1[LEN] = {1,2,3,4,5,6,7,8,9,10};
  int arr2[LEN] = {1,1,1,1,1,6,7,8,9,10};
  int arr3[LEN] = {1,1,1,1,1,6,5,5,9,10};

  printf("%d\n", test(arr1));
  printf("%d\n", test(arr2));
  printf("%d\n", test(arr3));
  return 0;
}
