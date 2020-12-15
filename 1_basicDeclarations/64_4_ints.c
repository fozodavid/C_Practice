#include <stdio.h>
#include <limits.h>
#define LIMIT 5

int main() {
  int input[LIMIT];

  printf("Input a positive integer: ");
  scanf("%d", &input[0]);

  int i;
  for(i = 1; i < LIMIT; i++) {
    printf("Input next positive integer: ");
    scanf("%d", &input[i]);
  }

  int positives = 0;
  for(i = 0; i < LIMIT; i++) {
    if (input[i] > 0) positives++;
  }
  printf("Number of positive values entered is %d\n", positives);

  int max = 0;
  for(i = 0; i < LIMIT; i++) {
    if (input[i] > 0) {
      if(input[i] > max) max = input[i];
    }
  }

  int min = INT_MAX;
  for(i = 0; i < LIMIT; i++) {
    if (input[i] > 0) {
      if(input[i] < min) min = input[i];
    }
  }

  int sum;
  for(i = 0; i < LIMIT; i++) {
    if (input[i] > 0) {
      sum += input[i];
    }
  }

  printf("Maximum value entered is %d\n"
      "Minimum value entered is %d\n"
      "Average value is %.4f\n", max, min, (float)sum / positives);

  return 0;
}
