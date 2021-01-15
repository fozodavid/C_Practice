#include <stdio.h>

int main() {
  printf("Number of blanks, tabs, and newlines:\n");
  printf("Input few words/tab/newlines\n");

  char c;
  int blanks = 0, 
      tabs = 0,
      newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') blanks++;
    if (c == '\t') tabs++;
    if (c == '\n') newlines++;
  }

  printf("blanks=%d,tabs=%d,newline=%d\n", blanks, tabs, newlines);
  return 0;
}
