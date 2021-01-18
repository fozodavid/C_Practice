#include <stdio.h>

int main() {
  int a, b;
  printf("Input two integers: ");
  scanf("%d", &a);
  scanf("%d", &b);
  if (a / b != 0 && a % b == 0) printf("Multiples!\n");
  else if (b / a != 0 && b % a == 0) printf("Multiples!\n");
  else printf("Not multiplies!\n");

  return 0;
}
