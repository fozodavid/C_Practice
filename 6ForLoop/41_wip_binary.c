#include <stdio.h>
#include <limits.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  for (int i = INT_MAX; i > 0; i /= 2) {
    if (i > 1) {
      printf("%d", num % (i * 2) / i);
    } else {
      printf("%d", num % i);
    }
  }
  printf("\n");

  return 0;
}
