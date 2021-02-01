#include <stdio.h>

int main() {
  int multiple, input;
  printf("Input the first integer: ");
  scanf("%d", &multiple);
  printf("Input the second integer: ");
  scanf("%d", &input);
  if (multiple % input == 0) {
    printf("\n%d is a multiple of %d\n", multiple, input);
  } else {
    printf("\n%d is not a multiple of %d\n", multiple, input);
  }

  return 0;
}
