#include <stdio.h>

void print_squares(int num, int start) {
  char * oddeven = start == 2 ? "even" : "odd";
  printf("\nSquare of each %s between 1 and %d: \n", oddeven, num);
  int i = start;
  while (i <= num) {
    printf("%d^2 = %d\n", i, i * i);
    i += 2;
  }
}

int main() {
  int num;

  printf("Input a number(integer): ");
  scanf("%d", &num);

  print_squares(num, 2);
  print_squares(num, 1);

  return 0;
}

