#include <stdio.h>
#include <math.h>
#define LIM 5
#define MAX 10

int main() {
  int i, k, absi;
  for (i = 1; i < MAX; i++) {
    absi = abs(LIM - i);
    k = 0;
    while (k < absi) {
      printf(" ", absi);
      k++;
    }
    k = 0;
    while (k < (9 - (2 * absi))) {
      printf("*");
      k++;
    }
    printf("\n");
  }

  return 0;
}
