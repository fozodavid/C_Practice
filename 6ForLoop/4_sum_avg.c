#include <stdio.h>
#define LEN 4

int main() {
  float arr[LEN];

  int i;
  for(i = 0; i < LEN; i++) {
    printf("Number %d: ", i);
    scanf("%f", &arr[i]);
  }

  float sum = 0;
  for(i = 0; i < LEN; i++) {
    sum += arr[i];
  }
  printf("The sum is: %.0f\n", sum);

  printf("The average is: %.2f\n", sum / LEN);

  return 0;
}
