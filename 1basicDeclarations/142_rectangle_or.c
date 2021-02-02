#include <stdio.h>

int main() {
  int a, b, c;
  printf("Input two adjoined sides of the parallelogram:\n");
  scanf("%d %d", &a, &b);

  printf("Input the diagonal of the parallelogram:\n");
  scanf("%d", &c);

  if (a * a + b * b == c * c) {
    printf("This is a rectangle.\n");
  } else {
    printf("\nThis is a rhombus.\n");
  }
  return 0;
}
