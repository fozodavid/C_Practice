#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DICT_LEN 10
#define MEMBER_LEN 10

struct entry {
  char word[MEMBER_LEN];
  int pagenum[MEMBER_LEN];
};

int cmpfunc(struct entry *a, struct entry *b) {
  return strcmp(a -> word, b -> word);
}

void initiate_dict(struct entry * dictionary) {
  int i, k;
  i = 0;
  while (i < DICT_LEN) {
    dictionary[i].word[0] = 0;
    k = 0;
    while (k < MEMBER_LEN) {
      dictionary[i].pagenum[k] = -1;
      k++;
    }
    i++;
  }
}

void register_dict(struct entry * dictionary) {
  int i, j, k, pagenum, found, finished;
  char word[MEMBER_LEN];

  printf("Input pairs of a word and a page_no number:\n");

  i = 0;
  finished = 0;
  while (i < DICT_LEN && !finished) {
    scanf("%s", word);
    scanf("%d", &pagenum);

    if (word[0] == 0) {
      finished = 1;
      break;
    }

    found = 0;
    k = 0;
    // registering
    while (k < DICT_LEN && !found) {
      if (!strcmp(dictionary[k].word, word)) {
        found = 1;
        printf("found\n");
        j = 0;
        while (j < MEMBER_LEN && dictionary[k].pagenum[j] != -1) {
          j++;
        }
        dictionary[k].pagenum[j] = pagenum;
        break;
      }
      k++;
    }

    if (!found) {
      k = 0;
      while (k < DICT_LEN && dictionary[k].word[0] != 0) {
        k++;
      }
      strcpy(dictionary[k].word, word);
      dictionary[k].pagenum[0] = pagenum;
    }

    word[0] = 0;
    i++;
  }

  qsort(dictionary, MEMBER_LEN, sizeof(struct entry), cmpfunc);
}
void print_dict(struct entry * dictionary) {
  int i, k;
  // print
  printf("\nWord and page_no number:\n");
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
}

int main() {
  struct entry dictionary[DICT_LEN];
  // Initialization
  initiate_dict(dictionary);
  register_dict(dictionary);
  print_dict(dictionary);


  return 0;
}
