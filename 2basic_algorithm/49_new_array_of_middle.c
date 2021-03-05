#include <stdio.h>
#define LEN 6

int main() {
  int original[6] = {1,5,7,9,11,13};
  int new[3];

  int i = (LEN/2) - 1;
  int limit =  i + 2;
  int j = 0;
  while(i <= limit) {
    new[j] = original[i];
    i++;
    j++;
  }

  i = 0;
  while (i < 3) {
    printf("%d ", new[i]);
    i++;
  }

  return 0;
}
