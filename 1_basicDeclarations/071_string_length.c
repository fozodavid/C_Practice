#include <stdio.h>

#define MAX_LEN 20

int main () {
  char input[MAX_LEN];
  printf("Input a string ");
  scanf("%s", input);
  printf("Original string: %s\n", input);

  int length = 0;
  while(input[length] != '\0') {
    length++;
  }
  printf("Number of characters = %d", length);
}
