#include <stdio.h>

int isPrime (int num) {
  if (num <= 1) return 0;
  if (num == 2) return 1;
  if (!(num % 2)) return 0;
  if (num == 3) return 1;
  int prime = 1;
  for (int i = 3; i < num; i += 2) {
    if (!(num % i)) {
      prime = 0;
      break;
    }
  }
  return prime;
}

int main() {
  int primes[500] = {0};
  primes[0] = 2;
  int count = 1;
  for (int i = 3; i < 500; i++) {
    if (isPrime(i)) {
      primes[count++] = i;
    }
  }

  int input;
  printf("Input strong number: ");
  scanf("%d", &input);

  if (!(isPrime(input))) {
    printf("%d is not a Strong number", input);
    return 0;
  }


  for (int i = 0; primes[i] != 0; i++) {
    if (input == primes[i]) {
      if (((primes[i - 1] + primes[i + 1]) / 2) < primes[i]) {
        printf("%d is a Strong number", input);
      } else {
        printf("%d is not a Strong number", input);
      }
      break;
    }
  }

  return 0;
}
