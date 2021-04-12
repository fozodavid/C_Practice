#include <stdio.h>
#include <stdlib.h>
#define LEN 8

int main() {
  char text[LEN];
  printf("Input a number: ");
  scanf("%s", &text);
  long my_num;

  my_num = strtol(text, NULL, 10);

  printf("\n%ld\n", my_num);
  return 0;
}
