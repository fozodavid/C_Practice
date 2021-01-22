#include <stdio.h>

int main() {

  int num;
  printf("Input a number (integer value):\n");
  scanf("%d", &num);

  printf("All positive divisors of %d\n", num);
  int i = 1;
  while (i <= num) {
    if (num % i == 0) {
      printf("%d\n", i);
    }
    i++;
  }
  return 0;
}
