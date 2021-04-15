#include <stdio.h>

int main() {
  int x, y;
  printf("Test Data: ");
  scanf("%d %d", &x, &y);

  char * no;

  if (x > 0 && y < 0) no = "First";
  if (x > 0 && y > 0) no = "Second";
  if (x < 0 && y < 0) no = "Third";
  if (x < 0 && y > 0) no = "Fourth";

  printf("The coordinate point (%d,%d) lies in the %s quadrant.\n", x, y, no);
  return 0;
}
