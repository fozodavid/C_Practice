#include <stdio.h>

int is_perfect(int number) {
  int i;
  int sum = 0;
  for (i = 1; i < number; i++) {
    if (number % i == 0) {
      sum += i;
    }
  }
  return sum == number;
}

int main() {
  int start, end;
  printf("Input the starting range or number: ");
  scanf("%d", &start);
  printf("Input the ending range of number: ");
  scanf("%d", &end);

  int i;
  int perfect = 0;
  for (i = start; i <= end; i++) {
    perfect = is_perfect(i);
    if (perfect) {
      printf("%d ",i);
    }
  }
  printf("\n");

  return 0;
}
