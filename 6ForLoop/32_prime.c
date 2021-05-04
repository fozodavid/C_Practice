#include <stdio.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  if (num == 2) {
    printf("Prime\n");
    return 0;
  }

  if (num <= 1 || !(num % 2)) {
    printf("Not Prime\n");
    return 0;
  }

  int i;
  int prime = 1;
  for (i = 3; i < num; i += 2) {
    if (num % i == 0) {
      prime = 0;
    }
  }
  if (prime) {
    printf("Prime\n");
  } else {
    printf("Not Prime\n");
  }

  return 0;
}
