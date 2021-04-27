#include <stdio.h>
#include <math.h>


double factorial(int num) {
  int i;
  int fact = 1;
  for (i = 1; i <= num; i++) {
    fact *= i;
  }
  return (double)fact;
}

int main() {
  double x;
  int terms;
  printf("Input the value of x: ");
  scanf("%lf", &x);

  printf("input number of terms: ");
  scanf("%d", &terms);

  int i;
  double sum = 0.0;
  for (i = 0; i < terms; i++) {
    sum += (pow(x, (double)i) / factorial(i));
  }

  printf("The sum is: %lf\n", sum);

  return 0;
}
