#include <stdio.h>

void print_sums(int first, int second, int odd) {
  char *even_odd = odd ? "odd" : "even";
  printf("Sum of all %s values between %d and %d: \n", even_odd, first, second);
  int i = first;
  int sum = 0;
  while (i < second) {
    if (i % 2 == odd) { sum += i; };
    i++;
  }
  printf("%d\n", sum);
}

int main() {
  int first, second;
  printf("Input the first integer number: ");
  scanf("%d", &first);
  printf("Input the second integer number (greater than first integer): ");
  scanf("%d", &second);
  if (first >= second) return 0;

  print_sums(first, second, 1);

  print_sums(first, second, 0);
  return 0;
}
