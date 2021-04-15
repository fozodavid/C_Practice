#include <stdio.h>

int main() {
  char text[20];
  int a, b;
  printf("Input two angles of triangle by comma: ");

  fgets(text, sizeof(text), stdin);
  sscanf(text, "%d,%d", &a, &b);
  
  printf("Third angle of the triangle: %d\n", 180 - a - b);

  return 0;
}
