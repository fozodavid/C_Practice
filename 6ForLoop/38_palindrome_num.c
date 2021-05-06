#include <stdio.h>

int main() {
  int num; 
  int digit;
  printf("Test Data: ");
  scanf("%d", &num);

  int sum = 0;
  int k = (int)log10((double)num);
  for (int i = 10; i < 100000000; i *= 10) {
    digit = (num % i) / (i / 10);
    sum += digit * (pow(10, k--));
  }

  printf("%d %d ", sum, num);
  if (sum == num) {
    printf("Palindrome\n");
  } else {
    printf("NOT Palindrome\n");
  }

  return 0;
}
