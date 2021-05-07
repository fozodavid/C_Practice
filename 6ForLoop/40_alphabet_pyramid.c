#include <stdio.h>
#define LIM 10

int main() {
  int k;
  for (int i = 2; i < LIM; i += 2) {
    for (k = 1; k < (LIM / 2) - (i / 2); k++) {
      printf(" ");
    }
    k = 0;
    for (k = 1; k < i; k++) {
      printf("%c", (char)((i / 2) - abs(k - ( i / 2))+64) );
    }
    printf("\n");
  }
  return 0;
}
