#include <stdio.h>

int main() {
  int a, b;

  scanf("%d %d", &a, &b);
  if (a == 30 || b == 30 || a + b == 30) printf("True");
  return 0;
}
