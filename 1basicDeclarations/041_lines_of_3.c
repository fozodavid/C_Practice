#include <stdio.h>

int main() {
  int lines;

  printf("Input number of lines: ");
  scanf("%d", &lines);

  int k = 0;
  for (int i = 0; i < lines; i++) {
   printf("%03d %03d %03d\n", k + 1, k + 2, k + 3);
   k += 3;
  }
  return 0;
}
