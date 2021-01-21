#include <stdio.h>

int main() {

  int num;
  printf("Input a number (integer): ");
  scanf("%d", &num);

  printf("\nRemainder value is 3 after divide all numbers between\n");
  int i = 1;
  while(i <= 100) {
    if (i % num == 3) {
    printf("%d\n", i);
    }
    i++;
  }
  return 0;
}
