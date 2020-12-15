#include <stdio.h>

int main() {
  int input;
  printf("Input value: ");
  scanf("%d", &input);
  printf("The left shifted data is = %d", input << 3);
  return 0;
}
