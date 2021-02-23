#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define LEN 20

int recurse() {
  return 1;
}

struct symbol {
  char data;
  struct symbol *next;
  struct symbol *prev;
};

int main() {
  struct symbol *root = NULL;
  struct symbol *head = NULL;
  struct symbol *current = NULL;

  char exp[LEN];
  printf("Input an exp using +, -, *, / operators:\n");
  scanf("%s", exp);

  current = malloc(sizeof(struct symbol));
  head = current;
  root = current;
  int s = 0;
  while(exp[s] != '\0') {
    /* strcpy(sign, exp[s]); */
    current -> data = exp[s];
    current -> next = malloc(sizeof(struct symbol));
    current = current -> next;
    current -> prev = head;
    head = current;
    s++;
  }

  current = root;
  while (current -> next != 0) {
    printf("%c", current -> data);
    current = current -> next;
  }

  printf(" ");

  current = head;
  while (current -> prev != 0) {
    current = current -> prev;
    printf("%c", current -> data);
  }

  return 0;
}
