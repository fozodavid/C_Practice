#include <stdio.h>

int main() {
  int input_seconds;
  int hours, minutes, secs;

  printf("Input seconds: \n");
  scanf("%d", &input_seconds);

  hours = input_seconds / 3600;
  minutes = input_seconds % 3600 / 60;
  secs = input_seconds % 3600 % 60;

  printf("H:M:S - %d:%d:%d",
    hours,
    minutes,
    secs
  );

  return 0;
}
