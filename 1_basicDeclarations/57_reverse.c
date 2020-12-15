#include <stdio.h>
#include <math.h>

int main() {
  /*
  int input;
  printf("Input a number: ");
  scanf("%d", &input);
  float scope;
  scope = log10(input);

  int i;
  int j = 0;
  int result = 0;
  for(i = (int)scope; i >= 0; i--) {
    result += (int)pow(10, j) * (input % (int)pow(10, i + 1) / (int)pow(10, i));
    j++;
  }
  printf("%d\n", result);

  return 0;
  */
  int num, last, result = 0;
  printf("Input a number: ");
  scanf("%d", &num);
  printf("\nThe original number = %d", num);
  while(num >= 1) {
    last = num % 10;
    result = result * 10 + last;
    num = num / 10;
  }
  printf("\nThe reverse of the said number = %d\n", result);
  return 0;
}
