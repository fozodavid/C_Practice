#include <stdio.h>

void print_integer_type(int num) {
  char * pos_neg = num < 0 ? "negative" : "positive";
  char * evenodd = num % 2 == 0 ? "even" : "odd";

  if (num == 0) {
    printf("Zero\n");
  } else {
    printf("Number is %s-%s\n", pos_neg, evenodd);
  }
}

int main() {
  int num;
  printf("Input a number (integer): ");
  scanf("%d", &num);


  print_integer_type(num);
  return 0;
}
