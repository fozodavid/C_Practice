#include <stdio.h>

int main() {
  float nominator = 1;
  int denominator = 1;

  float value = 0;
  for (int i = 0; i < 4; i++) {
    value += (nominator / denominator);
    nominator += 2;
    denominator *= 2;
  }

  printf("Value of S: %.2f\n", value);
  return 0;
}

