#include <stdio.h>

int main() {
  printf("Fahrenheit to Celsius\n");
  printf("---------------------\n");
  printf("Fahrenheit  Celsius\n");
  for (float f = 0.0; f < 160.0; f += 10.0) {
    printf("  %8.1f %8.1f\n", f, ((f - 32) / 1.8));
  }

  printf("\n\n");
  printf("Celsius to Fahrenheit\n");
  printf("---------------------\n");
  printf("Celsius    Fahrenheit\n");
  for (float c = 0.0; c < 160.0; c += 10.0) {
    printf("%7.1f %13.1f\n", c, (c * 1.8 + 32));
  }

  return 0;
}
