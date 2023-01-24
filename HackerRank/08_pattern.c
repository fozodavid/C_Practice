#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b) {
  return a > b ? a : b;
};

int abs(int a ) {
  return a < 0 ? -a : a;
};

int main() 
{

    int n;
    scanf("%d", &n);

    int x = 2 * n -1;
    int num = n;
    for (int row = 0; row < x; row++) {
      for (int col = 0; col < x; col++) {
        printf("%d ", max(abs(row -n +1) + 1, abs(col -n +1) +1));
      }
      printf("\n");
    }
    return 0;
}
