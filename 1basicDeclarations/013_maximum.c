#include <stdio.h>
#include <stdarg.h>

int max(int x, ...) {
  va_list parg;
  int maximum = x;
  int value;
  va_start(parg, x);

  while ((value = va_arg(parg, int)) != 0) {
    if (value > maximum) maximum = value;
  }

  va_end(parg);
  return maximum;
}

int main() {
   int x, y, z;

   printf("Input the first integer: ");
   scanf("%d", &x);
   printf("Input the second integer: ");
   scanf("%d", &y);
   printf("Input the third integer: ");
   scanf("%d", &z);

   printf("Maximum value of three integers: %d\n", max(x, y, z));
  return 0;
}
