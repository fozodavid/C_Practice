#include <stdio.h>

int main() {
  int marks[30];

  int lastmark = 1;
  int index = 0;
  printf("Input Mathematics marks (0 to terminate): ");
  while (lastmark > 0) {
    scanf("%d", &lastmark);
    marks[index] = lastmark;
    index++;
  }

  int sum = 0;
  for (int i = 0; i < (index - 1); i++) {
    sum += marks[i];
  }

  printf("Average marks in Mathematics: %.2f\n", (float)sum / (index - 1));
  return 0;
}
