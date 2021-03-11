#include <stdio.h>

int main() {
  int x, y;
  printf("Input two numbers (separated by space): ");
  scanf("%d %d", &x, &y);

  if (x < 5 || y > 1000000000 || x > y) {
    printf("Wrong input!");
    return 0;
  }
  printf("List of prime palindromes: \n");

  char textform[20];
  for (; x < y; x++) {
    sprintf(textform, "%d", x);
    printf("%s", textform);
  }

  return 0;
}
