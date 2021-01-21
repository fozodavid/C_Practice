#include <stdio.h>

int main() {
  int a, b;
  printf("Input two integer values: \n");
  scanf("%d", &a);
  scanf("%d", &b);

  if (b == 0) {
    printf("Division not possible\n");
  } else {
    printf("%.2f\n", (float)a / b);
  }

  return 0;
}
