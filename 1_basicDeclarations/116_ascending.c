#include <stdio.h>

int main() {
  int a, b;
  printf("Input two pairs values (integer values): \n");
  scanf("%d", &a);
  scanf("%d", &b);

  if (a > b) {
    printf("Descending order");
  } else if (a < b) {
    printf("Ascending order");
  } else {
    printf("Equals");
  }
  return 0;
}
