#include <stdio.h>
#include <math.h>

int main() {
  printf("=========================================\n\n"
    "n 2 to power n2 to power -n\n\n"
    "=========================================\n\n"
  );

  for(int i = 0; i < 11; i++) {
    printf("%2d  %4.0f  %6.4f\n", i, pow(2, i), pow(2, -i));
  }
  return 0;
}
