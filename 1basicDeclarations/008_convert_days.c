#include <stdio.h>

int main() {
  int days;
  printf("Provide days: ");

  scanf("%d", &days);

  printf("Years: %d\n", days / 365);
  printf("Weeks: %d\n", days % 365 / 7);
  printf("Days: %d\n", days % 365 % 7);
  return 0;
}
