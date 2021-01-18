#include <stdio.h>

int main() {
  int special_number;
  printf("Input an integer: ");
  scanf("%d", &special_number);

  int i;
  for (i = 1; i <= 100; i++) {
    if (i % special_number == 3) {
      printf("%d\n", i);
    }
  }

  return 0;
}
