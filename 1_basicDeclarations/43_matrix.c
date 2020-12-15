#include <stdio.h>

int main() {
  int lines, limit;
  

  printf("Input number of lines: ");
  scanf("%d", &lines);
  printf("Input number of characters in line: ");
  scanf("%d", &limit);

  int k = 1;
  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < limit; j++) {
       printf("%02d ", k);
       k++;
    };
    printf("\n");
  }
  return 0;
}

