#include <stdio.h>

int main() {
  int x, y;

  printf("Input the first number: ");
  scanf("%d", &x);
  printf("Input the second number: ");
  scanf("%d", &y);

  int i;
  int sum = 0;
  for (i = x; i <= y; i++) {
    if (i % 17 != 0) {
      sum += i;
    }
  }

  printf("Sum: %d\n", sum);
 
  return 0;
}
