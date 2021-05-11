#include <stdio.h>
#include <limits.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  for (int i = 4096; i > 0; i /= 2) {
    printf("%d", num / i);
    num = num - ((num / i) * i);
  }
  printf("\n");

  return 0;
}
