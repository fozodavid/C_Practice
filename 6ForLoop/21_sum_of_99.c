#include <stdio.h>

int main() {
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  int item = 9;
  int sum = 0;

  int i;
  for (i = 0; i < num; i++) {
    sum += item;
    printf("%d\n", item);
    item = (item * 10) + 9;
  }

  printf("The sum: %d\n", sum);
  return 0;
}
