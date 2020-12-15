#include <stdio.h>

int main() {
  int input_days;

  printf("Input no. of days: \n");
  scanf("%d", &input_days);

  int years, months, days;

  years = input_days / 365;
  months = input_days % 365 / 30;
  days = input_days % 365 % 30;

  printf("%d Year(s)\n%d Months(s) \n%d Day(s)\n", years, months, days);

  return 0;
}
