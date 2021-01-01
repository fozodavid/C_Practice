#include <stdio.h>

int main() {
  float mindeg, hourdeg;
  int min, hour;
  printf("Input hour(h) and minute(m) (separated by a space):");
  scanf("%d %d", &hour, &min);

  mindeg = (min % 60) * 360.0 / 60.0;
  hourdeg = (hour % 12) * 360.0 / 12.0;
  float diff = hourdeg - mindeg;
  printf("The angle is %f degrees at %2d:%02d.", diff, hour, min);

  return 0;
}
