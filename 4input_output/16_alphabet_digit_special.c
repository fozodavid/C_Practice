#include <stdio.h>

int main() {
  char token;

  printf("Please input a character: ");
  scanf("%c", &token);

  if (token >= '0' && token <= '9') {
    printf("\nThe character is a digit.");
  } else if ((token >= 'a' && token <= 'z') || (token >= 'A' && token <= 'Z')) {
    printf("\nThe character is a letter.");
  } else {
    printf("\nThis is a special character.");
  }

  return 0;
}
