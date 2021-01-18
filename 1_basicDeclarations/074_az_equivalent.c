#include <stdio.h>

void list_nums(char start, char end);

int main() {
  list_nums('a', 'z');
  list_nums('A', 'Z');

  return 0;
}

void list_nums(char start, char end) {
  int current = start;
  while (current <= end) {
    printf("%d ", current);
    current++;
  }
}
