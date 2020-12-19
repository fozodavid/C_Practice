#include <stdio.h>
#define TERMINATE 888.00

float calculate_avg(float *numbers, int length) {
  float sum = 0;
  for(int i = 0; i < length; i++) {
    sum += numbers[i];
  }
  return sum / length;
}

int main() {
  float numbers[100];
  float input;

  printf("Input each number on a separate line (888 to exit):");
  int index = 0;
  while (input != TERMINATE) {
    scanf("%f", &input);
    if (input == TERMINATE) break;
    numbers[index] = input;
    index++;
  };
  printf("The average value of the said numbers is %f\n", calculate_avg(numbers, index));

  return 0;
}
