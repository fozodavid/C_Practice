#include <stdio.h>

int main() {
  int input1, input2;

  puts("Provide first integer: ");
  scanf("%d", &input1);
  puts("Provide second integer: ");
  scanf("%d", &input2);

  printf("Sum of the above integers = %d", input1 + input2);
  return 0;
}
