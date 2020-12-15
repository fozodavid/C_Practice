#include <stdio.h>

int main() {
  int month;

  const char * months[12] = {
    "Jan", "Feb", "Mar",
    "Apr", "May", "Jun",
    "Jul", "Aug", "Sep",
    "Oct", "Nov", "Dec"
  };

  printf("Input a number between 1 to 12 to a get a month name: ");
  scanf("%d", &month);

  printf("%s\n", months[month - 1]);

  return 0;
}
