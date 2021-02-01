#include <stdio.h>
#include <math.h>

int is_prime(float num) {
  int is_prime = 1;
  if (num == 2.0);
  else if (fmod(num, 1.0) > 0) {
    is_prime = 0;
  } else if (fmod(num, 2.0) == 0) { 
    is_prime = 0;
  } else {
    for (int i = 3; i < num; i += 2) {
      if (fmod(num, i) == 0) is_prime = 0;
    }
  }
  return is_prime;
};

int get_nearly_prime(float num) {
  int divider = 3;
  while(divider < num) {
    if (is_prime(divider) && is_prime(num / divider)) {
      return 1;
    }
    divider++;
  }
  return 0;
}

int main() {
  float num;
  printf("Enter a number: ");
  scanf("%f", &num);

  if (get_nearly_prime(num)) {
    printf("It is Nearly a prime number.");
  } else {
    printf("It is not a Nearly a prime number.");
  }
}
