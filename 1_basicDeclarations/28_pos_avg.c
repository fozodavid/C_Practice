#include <stdio.h>

int main() {
  int numbers[5];

  printf("Input the first number: ");
  scanf("%d", &numbers[0]);
  printf("Input the second number: ");
  scanf("%d", &numbers[1]);
  printf("Input the third number: ");
  scanf("%d", &numbers[2]);
  printf("Input the fourth number: ");
  scanf("%d", &numbers[3]);
  printf("Input the fifth number: ");
  scanf("%d", &numbers[4]);
 
  int positives;
  int sum = 0;
  int i;
  for (i = 0; i < 5; i++) {
    if (numbers[i] >= 0) {
      sum += numbers[i];
      positives++;
    }
  }

  float avg = (float)sum / positives;
  printf("Number of positive numbers: %d\n", positives);
  printf("Average value of the said positive numbers: %.2f\n", avg);

  return 0;
}
