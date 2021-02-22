#include <stdio.h>

// digit appears in both numbers

int test(int a, int b) {
  char first[10], second[10];

  sprintf(first, "%d", a);
  sprintf(second, "%d", b);

  int i, j;
  i = 0;

  while (i < 10 && first[i] != '\0') {
    first[i];
    j = 0;
    while (j < 10 && second[j] != '\0') {
        if (first[i] == second[j]) return 1;
      j++;
    }
    i++;
  }

  return 0;
}

int main() {
  printf("%d\n", test(11, 16));
  printf("%d\n", test(20, 11));
  printf("%d\n", test(0, 5));
  printf("%d\n", test(2, 20));

  return 0;
}
