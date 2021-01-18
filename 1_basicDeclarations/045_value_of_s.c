#include <stdio.h>

int main() {
  float value = 0;
  for (int i = 1; i <= 50; i++) {
    value += (1.0 / i);
  }

  printf("Value of S: %.2f\n", value);
  return 0;
}
