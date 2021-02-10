#include <stdio.h>
#define LIMIT 500

int is_num(char c) {
  return c >= 48 && c <= 75;
}

int convert(char c) {
  return (int)(c) - 48;
}

int main() {
  char sen[LIMIT];
  char c;
  printf("Input Sentences with positive integers:\n");
  fgets(sen, LIMIT, stdin);

  int i = 0, k = 0, sum = 0, partial = 0;

  while (sen[i] != '\0') {
    c = sen[i];
    if (is_num(c)) {
      k = i;
      while (is_num(sen[k])) {
        partial = partial * 10 + convert(sen[k]);
        k++;
        i = k;
      }
      sum = partial + sum;
      partial = 0;
    }
    i++;
  }

  printf("Sum of all numerical values embedded in a sentence:\n%d", sum);

  return 0;
}
