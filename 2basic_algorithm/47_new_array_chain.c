#include <stdio.h>

int main() {
  int old1[3] = {10, 20, 30};
  int old2[3] = {40, 50, 60};

  int new[6];

  int i = 0;
  while (i < 3) {
    new[i] = old1[i];
    i++;
  }
  while (i < 6) {
    new[i] = old2[i - 3];
    i++;
  }

  i = 0;
  while (i < 6) {
    printf("%d ", new[i]);
    i++;
  }
  return 0;
}
