#include <stdio.h>

int is_prime(int num) {
  if (num == 1) return 0;
  if (num == 2) return 1;
  if (num == 3) return 1;
  if (num % 2 == 0) return 0;
  int i = 3;
  while (i < num) {
    if (num % i == 0) return 0;;
    i += 2;
  }
  return 1;
}

int main() {
  int input;
  printf("Input a number:\n");
  scanf("%d", &input);

  printf("Number of prime numbers which are less than or equal:\n");

  if (input < 3 ) { printf("0\n"); return 0; }
  if (input == 3 ) { printf("1\n"); return 0; }
  int i = 1;
  int count = 0;
  while (i < input) {
    count += is_prime(i);
    i++;
  }
  printf("%d\n", count);
  return 0;
}
