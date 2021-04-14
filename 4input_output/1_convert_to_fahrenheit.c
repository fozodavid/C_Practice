#include <stdio.h>

int main() {
  float cels;
  printf("Input Celsius value: ");
  scanf("%f", &cels);

  printf("\nIn Fahrenheit: %.1f\n", (cels * 1.8) + 32);


  return 0;
}
