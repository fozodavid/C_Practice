#include <stdio.h>
#include <string.h>
#define DICT_LEN 10
#define MEMBER_LEN 10

struct entry {
  char word[MEMBER_LEN];
  int pagenum[MEMBER_LEN];
};

int main() {
  struct entry dictionary[DICT_LEN];
  int i = 0;
  int k = 0;
  int j = 0;
  int f = 0;
  // Initialization
  while (i < DICT_LEN) {
    dictionary[i].word[0] = 0;
    k = 0;
    while (k < MEMBER_LEN) {
      dictionary[i].pagenum[k] = -1;
      k++;
    }
    i++;
  }

  printf("Input pairs of a word and a page_no number:\n");

  int finished = 0;
  char word[MEMBER_LEN];
  int pagenum;
  i = 0;
  while (i < DICT_LEN && !finished) {
    scanf("%s", word);
    scanf("%d", &pagenum);

    if (word[0] == '\0') finished = 1;

    int found = 0;
    k = 0;
    // registering
    while (k < DICT_LEN && dictionary[k].pagenum[0] > -1) {
      if (!strcmp(dictionary[k].word, word)) { // is it possible to compare two strings?
        found = 1;
        j = 0;
        while (j < MEMBER_LEN && !dictionary[k].pagenum[j]) {
          j++;
        }
      }
      dictionary[k].pagenum[j] = pagenum;
      k++;
    }
    if (!found) {
      strcpy(dictionary[k].word, word);
      f = 0;
      while (f < MEMBER_LEN) {
        if (dictionary[k].pagenum[f] != -1) {
          dictionary[k].pagenum[f] = pagenum;
          break;
        }
        f++;
      }
    }
    // search for same word

    word[0] = '\0';
    i++;
  }


  // print
  printf("\nWord and page_no number in alphabetical order:\n");
  i = 0;
  while (i < DICT_LEN && dictionary[i].pagenum[0] > -1) {
    printf("%s\n", dictionary[i].word);
    k = 0;
    while (k < MEMBER_LEN && dictionary[i].pagenum[k]) {
      if (dictionary[i].pagenum[k] != -1) {
        printf("%d ", dictionary[i].pagenum[k]);
      }
      k++;
    }
    printf("\n");
    i++;
  }

  return 0;
}
