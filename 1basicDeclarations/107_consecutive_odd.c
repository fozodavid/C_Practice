#include <stdio.h>
#define LENGTH 10

void print_nums(int num, int addition) {
  int i;
  for (i = num + addition; i <= num + 2*LENGTH; i += 2) {
    printf("%d, ", i);
  }
  printf("\n");
}

int main() {
  int num;
  printf("Input an integer number: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Next 10 consecutive even numbers: \n");
    print_nums(num, 2);
    printf("Next 10 consecutive odd numbers: \n");
    print_nums(num, 1);
  } else {
    printf("Next 10 consecutive even numbers: \n");
    print_nums(num, 1);
    printf("Next 10 consecutive odd numbers: \n");
    print_nums(num, 2);
  }

  return 0;
}

