#include <stdio.h>
#include <math.h>

int main() {
  int input;
  printf("Input a positive number less than 500: ");
  scanf("%d", &input);

  int result = 0;
  for(int i = 0; i < 3; i++) {
    result += input % 10;
    input = input / 10;
  }
  printf("Output: %d\n", result);
  return 0;
}
