#include <stdio.h>

int main() {
  int input;
  printf("Input a positive integer, less than 100: ");
  scanf("%d", &input);

  int result = 0;
  int curr = 1;
  for (int i = 0; i < input; i++) {
    curr += i;
    result += curr * curr * curr * curr;
  }

  printf("Output: %d\n", result);

  return 0;
}
