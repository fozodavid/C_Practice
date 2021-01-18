#include <stdio.h>
#define LENGTH 7

int main() {
  float numbers[LENGTH];

  printf("Input 7 numbers(int/float):\n");
  int i = 0;
  while (i < LENGTH) {
    scanf("%f", &numbers[i]);
    i++;
  }

  float pos_sum = 0,
    neg_sum = 0;
  int pos_count = 0,
    neg_count = 0;

  i = 0;
  while (i < LENGTH) {
    if (numbers[i] < 0) {
      neg_sum += numbers[i];
      neg_count++;

    }
    if (numbers[i] > 0) {
      pos_sum += numbers[i];
      pos_count++;
    }
    i++;
  }

  printf("%d numbers of positive numbers: Average %.2f\n", pos_count, pos_sum / pos_count);
  printf("%d numbers of negative numbers: Average %.2f\n", neg_count, neg_sum / neg_count);
  return 0;
}
