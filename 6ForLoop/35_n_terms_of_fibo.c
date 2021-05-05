#include <stdio.h>

int main() {
  int a = 0;
  int b = 1;
  int temp, n;

  printf("Test Data: ");
  scanf("%d", &n);

  printf("0 1 ");
  for (int i = 1; i < n - 1; i++) {
    temp = b;
    b = a + b;
    printf("%d ", b);
    a = temp;
  }

  return 0;
}
