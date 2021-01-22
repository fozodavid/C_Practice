#include <stdio.h>

int main() {

  int a, b, smaller, larger;
  printf("Input two numbers(integer):\n");
  scanf("%d", &a);
  scanf("%d", &b);
  smaller = a < b ? a : b;
  larger = a < b ? b : a;



  int i = smaller, sum = 0;
  while(i <= larger) {
    if (i % 7 != 0) {
      sum += i;
    }
    i++;
  }
  printf("Sum of all numbers between said numbers (inclusive)\n%d\n", sum);
  return 0;
}
