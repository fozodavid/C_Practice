#include <stdio.h>


int get_factorial(int input) {
  int index = input;
  int fact = 1;
  while (index != 0) {
    fact *= index;
    index--;
  }
  return fact;
}

int main() {
  int input;
  int factorial;
  char repr[20];
  printf("Input a positive number: ");
  scanf("%d", &input);
  factorial = get_factorial(input);
  printf("%d\n", factorial);
  sprintf(repr, "%d", factorial);
  int index = 0; 
  char last;
  while (repr[index] != '\0') {
    if (repr[index] != '0') {
      last = repr[index];
    }
    index++;
  }
  printf("%c\n", last);

  return 0;
}
