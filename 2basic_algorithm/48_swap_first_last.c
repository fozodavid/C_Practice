#include <stdio.h>
#define LEN 6

int main() {
  int old[LEN] = {1,5,7,9,11,13};

  int i = 0;
  while(i < LEN) {
    printf("%d ", old[i]);
    i++;
  }

  printf("\n");
  int temp = old[0];
  old[0] = old[LEN - 1];
  old[LEN - 1] = temp;

  i = 0;
  while(i < LEN) {
    printf("%d ", old[i]);
    i++;
  }

  return 0;
}
