#include <stdio.h>

int main() {
  int input;
  printf("Input a value (negative): ");
  scanf("%d", &input);
  printf("Original Value: %d\n", input);
  if (input < 0) {
    input *= -1;
  }
  printf("Absolute Value: %d\n", input);



  return 0;
}
