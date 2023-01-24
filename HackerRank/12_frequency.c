#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int freqs[10];
  int curr;

  char *s;
  s = malloc(1024 * sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);
  
  for (int i = 0; i < 10; i++) {
    freqs[i] = 0;
  }

  for (int i = 0; i < strlen(s); i++) {
    curr = s[i] - '0';
    if (curr < 10) {
      freqs[(int)curr] += 1;
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", freqs[i]);
  }

  return 0;
}
