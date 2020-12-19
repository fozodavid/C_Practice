#include <stdio.h>
#define LIMIT 20

int main() {
  char input[LIMIT];
  printf("Input a number: ");
  scanf("%s", input);

  int threes = 0;
  for (int i = 0; i < LIMIT; i++) {
    if (input[i] == '3') threes++;
  }
  printf("The number of threes in the said number is: %d\n", threes);

  return 0;
}
