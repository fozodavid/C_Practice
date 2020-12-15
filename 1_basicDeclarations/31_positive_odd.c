#include <stdio.h>

int main() {
  int special_number;
  printf("Input an integer: ");
  scanf("%d", &special_number);

  if (special_number % 2 == 0 && special_number < 0) printf("Negative Even");
  else if (special_number % 2 == 0 && special_number >= 0) printf("Positive Even");
  else if (special_number % 2 == 1 && special_number >= 0) printf("Positive Odd");
  else printf("Negative Odd");

  return 0;
}
