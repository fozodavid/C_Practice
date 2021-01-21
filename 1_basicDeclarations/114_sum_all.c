#include <stdio.h>

int main() {
  int a, b, larger, smaller;
  printf("Input two numbers (integer values): ");
  scanf("%d", &a);
  scanf("%d", &b);
  larger = a > b ? a : b;
  smaller = a < b ? a : b;

  printf("\nSum of all even values between %d and %d\n", a, b);
  int i = smaller % 2 == 0 ? smaller : smaller + 1;
  int sum = 0;
  while (i <= larger) {
    sum += i;
    i += 2;
  }
  printf("%d\n", sum);


  return 0;
}
