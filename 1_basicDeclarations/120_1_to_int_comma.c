#include <stdio.h>

int main() {

  int num;
  printf("Input a number(integer):\n");
  scanf("%d", &num);

  int i = 1;
  while(i < num) {
    printf("%d,", i);
    i++;
  }
  printf("%d\n", num);


  return 0;
}
