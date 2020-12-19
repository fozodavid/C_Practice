#include <stdio.h>

int main() {
  char input[6];
  printf("Input a five-digit number: ");
  scanf("%s", input);

  int palindrome = 1;
  int k = 4;
  for (int i = 0; i < 5; i++) {
    if (input[i] != input[k]) {
      palindrome = 0;
    }
    k--;
  }

  if (palindrome) {
    printf("%s is a palindrome", input);
  } else {
    printf("%s is not a palindrome", input);
  }

  return 0;
}
