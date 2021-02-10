#include <stdio.h>
#include <string.h>
#define LIMIT 500

// extract 3 to 6 char length words
int is_letter(char c) {
  return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}

int main() {
  char sen[LIMIT];
  char word[7];
  printf("English sentences consisting of delimiters and alphanumeric characters on one line:\n");
  fgets(sen, LIMIT, stdin);

  printf("Extract words of 3 to 6 characters length from the said sentence:\n");

  int i = 0, k = 0, index = 0;
  while(sen[i] != '\0') {
    if (is_letter(sen[i])) {
      k = i;
      while (is_letter(sen[k])) {
        word[index] = sen[k];
        k++;
        index++;
      }
      if (index >= 3 && index <= 6) printf("%s\n", word);
      memset(word, '\0', sizeof(word));
      i = k;
      index = 0;
      k = 0;
    }
    i++;
  }

  return 0;
}
