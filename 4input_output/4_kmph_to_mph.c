#include <stdio.h>
#define CONV_RATE 0.62137

int main() {
  float kmph;
  printf("Input kilometer per hour: ");
  scanf("%f", &kmph);
  printf("%.4f miles per hour", kmph * CONV_RATE);

  return 0;
}
