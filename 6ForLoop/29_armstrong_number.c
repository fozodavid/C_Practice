#include<stdio.h>
#include<math.h>

int main () {
  int number = 153;
  int digits[10];

  printf("Test Data: ");
  scanf("%d", &number);

  int i;
  for (i = 0; i < 10; i++) {
    digits[i] = (number % (int)(pow(10, (i + 1)))) / pow(10, i);
  }

  int sum = 0;
  int power = log10((double)number) + 1;

  for (i = 0; i < 10; i++) {
    sum += (int)pow(digits[i], power);
  }

  if (sum == number) {
    printf("This is an armstrong number");
  } else {
    printf("This is NOT an armstrong number");
  }
}
