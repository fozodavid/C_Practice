#include <stdio.h>

int main() {
  int x, y;

  printf("Input the first number: ");
  scanf("%d", &x);
  printf("Input the second number: ");
  scanf("%d", &y);

  int i;
  for (i = x; i < y; i++) {
    if(i % 7 == 2 || i % 7 == 3) {
      printf("%d\n", i);
    }

  }


  return 0;
}
