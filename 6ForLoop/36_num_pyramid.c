#include <stdio.h>
#define MAX 20

int main() {
  int k, diff;
  for (int i = 2; i < MAX; i += 2) {
    for (k = 1; k < (MAX/2) - (i/2); k++) {
      printf(" ");
    }
    for (k = 1; k < i; k++) {
      diff = abs(k - i / 2);
      printf("%d", (i / 2) - diff);
    }
    printf("\n");
  }

  return 0;
}
