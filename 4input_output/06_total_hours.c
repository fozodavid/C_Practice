#include <stdio.h>

int main() {
  int mins;
  printf("Input the number of minutes: ");
  scanf("%d", &mins);

  printf("\n%d Hours, %d Minutes\n", mins / 60, mins % 60);
  return 0;
}
