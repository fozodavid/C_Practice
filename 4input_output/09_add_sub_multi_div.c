#include <stdio.h>

int main() {
  char line[20];
  int a,b;

  printf("Input two numbers separated by comma: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d,%d", &a, &b);

  printf("Add:            %3d\n", a+b);
  printf("Subtract:       %3d\n", a-b);
  printf("Multiplication: %3d\n", a*b);
  printf("Divide:         %3.1f\n", a/(float)b);

  return 0;
}
