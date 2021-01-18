#include <stdio.h>
#include <limits.h>

#define LIMIT 4

int main() {
  float number[LIMIT];

  printf("Input four REAL numbers: ");
  int i;
  for (i = 0; i < LIMIT; i++) {
    scanf("%f", &number[i]);
  }

  float max = 0;
  for (i = 0; i < LIMIT; i++) {
    if (max < number[i]) max = number[i];
  }

  float min = 10e100;
  for (i = 0; i < LIMIT; i++) {
    if (min > number[i]) min = number[i];
  }

  printf("%.4f\n", max - min);

  return 0;
}
