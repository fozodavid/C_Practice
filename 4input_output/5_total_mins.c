#include <stdio.h>

int main() {
  int hours, mins;
  printf("Input hours: ");
  scanf("%d", &hours);
  printf("Input mins: ");
  scanf("%d", &mins);

  printf("%d Minutes\n", 60 * hours + mins);

  return 0;
}
