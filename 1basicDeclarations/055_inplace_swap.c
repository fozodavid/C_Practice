#include <stdio.h>

int main() {
  int a, b;
  printf("Input value: ");
  scanf("%d %d", &a, &b);
  printf("%d %d\n", a, b);

  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("%d %d\n", a, b);

  return 0;
}
