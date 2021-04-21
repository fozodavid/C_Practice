#include <stdio.h>

int main() {
  int limit;
  printf("Test Data: ");
  scanf("%d", &limit);

  int i;
  for(i = 1; i <= limit; i++) {
    printf("Number: %2d, Cube: %3d\n", i, i * i);
  }

  return 0;
}
