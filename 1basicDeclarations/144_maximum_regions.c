#include <stdio.h>

int get_regions(int num) {
  if (num == 1) return 2;
  return num + get_regions(num - 1);
}

int main() {
  int input;
  printf("Input number of straight lines:\n");
  scanf("%d", &input);

  printf("Maximum number of regions obtained by drawing 2 given straight lines:\n");
  printf("%d\n", get_regions(input));

  return 0;
}
