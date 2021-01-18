#include <stdio.h>
#define LENGTH 4

int main() {
  int number;
  int ranges[LENGTH][2] = {{0,100}, {100, 200}, {200, 300}, {300, 1000}};
  printf("Input a number: ");
  scanf("%d", &number);

  int i = 0;
  while (i < LENGTH) {
    if (number > ranges[i][0] && number <= ranges[i][1]) printf("Range [%d, %d]\n", ranges[i][0], ranges[i][1]);
    i++;
  }
  return 0;
}
