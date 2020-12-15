#include <stdio.h>

int main() {
  int a,b;

  printf("Input first number of the pair: \n");
  scanf("%d", &a);
  printf("Input second number of the pair: \n");
  scanf("%d", &b);

  if (a < b) printf("The paid is ascending order!\n");
  if (b < a) printf("The paid is descending order!\n");

  return 0;
}
