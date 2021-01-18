#include <stdio.h>

int main() {

  char buffer[100];
  char c, prev;
  c = prev = ' ';

  int index = 0;
  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\n') && (prev == ' ' || prev == '\n'));
    else if ((c == ' ' || c == '\n') && (prev != ' ' || prev != '\n')) {
      buffer[index] = '\0';
      printf("%s\n", buffer);
      index = 0;
    } else {
      buffer[index] = c;
      index++;
    }
    prev = c;
  }
  return 0;
}
