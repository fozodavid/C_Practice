#include <stdio.h>

int main() {
  int bars[10];
  int length;

  printf("Input number of histogram bar (Maximum 10): ");
  scanf("%d", &length);

  printf("Input the values between 0 and 10 (separated by space) ");
  int index = 0;
  while (index < length) {
    scanf("%d", &bars[index]);
    index++;
  }

  printf("\nHistogram: \n");

  for (int i = 0; i < length; i++) {
    int curr = bars[i];
    while (curr) {
      printf("#");
      curr--;
    }
    printf("\n");
  }

  return 0;
}
