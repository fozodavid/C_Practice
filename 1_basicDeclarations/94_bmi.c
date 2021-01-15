#include <stdio.h>

int main() {
  float weight, height, bmi;
  char grade[10];

  printf("Input the weight: ");
  scanf("%f", &weight);
  printf("Input the height: ");
  scanf("%f", &height);

  bmi = weight / ((height / 100)* (height / 100));
  printf("BMI = %f\n", bmi);

  if (bmi < 18.5) sprintf(grade, "Under");
  if (bmi >= 18.5 && bmi <= 25) sprintf(grade, "Normal");
  if (bmi > 25) sprintf(grade, "Overweight");

  printf("Grade: %s", grade);
  return 0;
}
