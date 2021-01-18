#include <stdio.h>

#define MAX_OPERATIONS 1000000000

int main() {
  int i;
  double result = 0;
  for (i = 1.0; i < MAX_OPERATIONS; i++) {
    result += 1.0 / i;
  }
  printf("%f\n", result);
  return 0;
}
