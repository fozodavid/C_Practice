#include <stdio.h>

int main() {
  int choice;
  int a, b;
  printf("Test Data: ");
  scanf("%d", &choice);

  scanf("%d %d", &a, &b);
  switch(choice) {
    case 1:
      printf("Sum: %d", a + b);
      break;
    case 2:
      printf("Difference: %d", a - b);
      break;
    case 3:
      printf("Product: %d", a * b);
      break;
    case 4:
      printf("Fraction: %d", a / b);
      break;

    default:
      printf("Invalid choice. Exiting");

  }
  return 0;
}
