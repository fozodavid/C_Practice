#include <stdio.h>
#include <math.h>

int main() {
  double x = 2;
  int terms = 5;
  printf("Test Data: ");

  int i;
  double sum;
  double sign = 1.0;
  for (i = 1; i < terms * 2; i += 2) {
    sum += sign * pow(x, (double)i);
    sign *= -1.0;
  }

  printf("%.0lf\n", sum);

  return 0;
}
