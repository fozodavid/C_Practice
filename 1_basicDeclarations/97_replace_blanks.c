#include <stdio.h>

int main() {
  char output[1000];
  int chars;
  int words;
  int lines;

  chars = words = lines = 0;

  char c, prev;
  int index = 0;
  c = prev = ' ';
  while ((c = getchar()) != EOF) {
    if (c != ' ') chars++;
    if ((c == ' ' || c == '\n' || c == '\t' ) && prev != ' ') words++;
    if (c == '\n') lines++;

    if (prev == ' ' && c == ' ');
    else {
      output[index] = c;
      index++;
    }
    prev = c;
  }
  output[index] = '\0';

  printf("%s", output);

  printf("\n\nNumber of Characters = %d\n", chars);
  printf("Number of words = %d\n", words);
  printf("Number of lines = %d\n", lines);
  return 0;
}
