#include <stdio.h>

void find_prime_palindromes(int x, int y);

int main() {
  int x, y;
  printf("Input two numbers (separated by a space):");
  scanf("%d %d", &x, &y);
  //TODO validate(x, y);
  find_prime_palindromes(x, y);

  return 0;
}

void find_prime_palindromes(int x, int y) {
  int is_prime (int num) {
    int prime = 1;
    for (int i = 5; i < num; i += 2) {
      if (num % i == 0) {
        prime = 0;
        break;
      }
    }
    return prime;
  }

  int is_palindrome (int num) {
    char num_repr[10];
    sprintf(num_repr, "%d", num);
    int length = 0;
    //TODO: make it into a function (with pointer?)
    while (num_repr[length] != '\0') {
      length++;
    };
    int curr = 0;
    int last = length -1;
    int palindrome = 1;
    while (curr <= last) {
      if (num_repr[curr] != num_repr[last]) {
        palindrome = 0;
      }
      curr++;
      last--;
    }
    return palindrome;
  }

  printf("List of prime palindromes:\n");
  int curr = x;
  while(curr <= y) {
    if(is_prime(curr) && is_palindrome(curr)) {
      printf("%d\n", curr);
    }
    curr++;
  }
}
