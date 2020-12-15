#include <stdio.h>

int main() {
  int input;
  printf("Input number of lines: ");
  scanf("%d", &input);

  for (int i = 1; i <= input; i++) {
    printf("%3d %3d %3d\n", i, i*i, i*i*i);
  }
  return 0;
}
