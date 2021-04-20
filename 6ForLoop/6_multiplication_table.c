#include <stdio.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  int i;
  for (i = 1; i <= 10; i++) {
    printf("%d X %2d = %3d\n", num, i, num * i);
  }
  return 0;
}
