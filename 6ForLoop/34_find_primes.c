#include <stdio.h>

int is_prime(int num) {
  if (num == 2) {
    return 1;
  }
  if (num <= 1 || !(num % 2)) {
    return 0;
  }
  int i;
  int prime = 1;
  for (i = 3; i < num; i += 2) {
    if (num % i == 0) {
      prime = 0;
    }
  }
  return prime;
}

int main() {
  int start, end;
  printf("Input start: ");
  scanf("%d", &start);
  printf("Input end: ");
  scanf("%d", &end);

  for (int i = start; i <= end; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}
