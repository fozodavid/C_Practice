#include <stdio.h>
#include <string.h>

#define LIMIT 12
#define ARR_SIZE (LIMIT + 1)

int main() {
  int new[ARR_SIZE];
  int arr[ARR_SIZE];
  memset(arr, 0, ARR_SIZE*sizeof(arr[0]));
  memset(new, 0, ARR_SIZE*sizeof(arr[0]));

  for(int i = 0; i < LIMIT; i++) {
    int j = 0;
    while(j < ARR_SIZE) {
      if (j > 0 && arr[j - 1] && arr[j] != 0) {
        new[j] = arr[j-1] + arr[j];
      }
      if(arr[j] == 0) {
        new[j] = 1;
        break;
      } 
      j++;
    }
    j = 0;
    while(j < ARR_SIZE) {
      if(arr[j] == 0) break;
      printf("%3d ", arr[j]);
      j++;
    }
    printf("\n");
    memcpy(arr, new, ARR_SIZE * sizeof(int));
  }
  return 0;
}
