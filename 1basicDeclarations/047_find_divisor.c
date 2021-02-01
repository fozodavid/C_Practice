#include <stdio.h>

int main() {
  int input;
  printf("Input an integer: ");
  scanf("%d", &input);

  for (int i = 1; i <= input; i++) {
    if (input % i == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
