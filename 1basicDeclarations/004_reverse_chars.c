#include <stdio.h>

int main() {
  char input[10];
  char input1 = 'a';
  char input2 = 'a';
  char input3 = 'a';

//   scanf("%c %c %c", input1, input2, input3);
  scanf("%s", input);
  printf("%c%c%c", input[2], input[1], input[0]);
  // printf("%c %c %c\n", input3, input2, input1);
  return 0;
}
