#include <stdio.h>

int main() {
  int numbers[5];
  printf("Input 5 integers: \n");

  scanf("%d", &numbers[0]);
  scanf("%d", &numbers[1]);
  scanf("%d", &numbers[2]);
  scanf("%d", &numbers[3]);
  scanf("%d", &numbers[4]);

  int i;
  int pos;
  int max = 0;;
  for (i = 0; i < 5; i++) {
    if (numbers[i] > max) {
      max = numbers[i];
      pos = i;
    }
  }

  printf("Highest value: %d\nPosition: %d\n", max, pos + 1);

  return 0;
}
