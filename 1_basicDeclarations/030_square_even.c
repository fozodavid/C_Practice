#include <stdio.h>

int main() {
  int input;

  printf("Input the number: ");
  scanf("%d", &input);

  int i; 
  for (i = 2; i < input + 1; i = i + 2) {
    printf("%d^2 = %d\n", i, i * i);
  }

  return 0;
}

