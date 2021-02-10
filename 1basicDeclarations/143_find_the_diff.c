#include <stdio.h>

int main() {
  int max, min, input, t;
  printf("Input an integer created by 8 numbers (0 to 9):\n");
  scanf("%d", & input);
  int i, j, str[8] = {
    0
  };

  for (i = 0; input != 0; i++) {
    str[i] = input % 10;
    input /= 10;
  }

  // Sort
  for (i = 0; i < 8; i++) {
    for (j = 1; j + i < 8; j++) {
      if (str[j - 1] < str[j]) {
        t = str[j - 1];
        str[j - 1] = str[j];
        str[j] = t;
      }
    }
  }

  max = 0;
  for (i = 0; i < 8; i++) {
    max *= 10;
    max += str[i];
  }

  // Turn
  for (i = 0; i * 2 < 8; i++) {
    t = str[i];
    str[i] = str[7 - i];
    str[7 - i] = t;
  }

  min = 0;
  for (i = 0; i < 8; i++) {
    min *= 10;
    min += str[i];
  }
  printf("\nThe difference between the largest integer and the smallest integer.\n");
  printf("%d - %d = %d\n", max, min, max - min);

  return 0;
}
