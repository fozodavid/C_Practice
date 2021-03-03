#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define LEN 20


const char OPERATORS[] = { '*', '/', '+', '-' };
struct symbol {
  char data;
  struct symbol *next;
  struct symbol *prev;
};

int evaluate(const struct symbol *start, int left);


int apply_operator(const struct symbol * head) {
  head -> next -> prev = NULL;
  head -> prev -> next = NULL;

  switch(head -> data) {
    /* case '*': */
      /* return evaluate(head -> prev, 1) * evaluate(head -> next, 0); */
    /* case '/': */
      /* return evaluate(head -> prev, 1) / evaluate(head -> next, 0); */
    case '+':
      return evaluate(head -> prev, 1) + evaluate(head -> next, 0);
    /* case '-': */
      /* return evaluate(head -> prev, 1) - evaluate(head -> next, 0); */
    default:
      printf("Error\n");
  }
}


int evaluate(const struct symbol *start, int left) {
  printf("Evaluate\n");

  if (start -> next == NULL && start -> prev == NULL) {
    int result;
    printf("%c", start -> data);
    /* sscanf(result, "%d", start -> data); */
    /* printf("%d", result); */
    return 2;
  }

  struct symbol * head = start;
  if(!left) {
    while(head -> next) {
      if(head -> data == '+') {
        return apply_operator(head);
      }
      head = head -> next;
    }
  } else {
    while(head -> prev) {
      if(head -> data == '+') {
        return apply_operator(head);
      }
      head = head -> prev;
    }
  }

  for (int i = 0; i < 4; i++) {
    struct symbol * head = start;
    if (!left) {
      while (head -> next) {
        if (head -> data == OPERATORS[i]) {
          return apply_operator(head);
        }
        head = head -> next;
      }
    } else {
      while (head -> prev) {
        if (head -> data == OPERATORS[i]) {
          return apply_operator(head);
        }
        head = head -> prev;
      }
    }
  }

}

int main() {
  struct symbol *root = NULL;
  struct symbol *head = NULL;
  struct symbol *prev = NULL;

  char exp[LEN];
  printf("Input an exp using +, -, *, / operators:\n");
  scanf("%s", exp);

  head = malloc(sizeof(struct symbol));
  root = head;
  head -> data = exp[0];
  prev = head;

  int s = 1;
  while(exp[s] != '\0') {
    /* strcpy(sign, exp[s]); */
    head -> next = malloc(sizeof(struct symbol));
    head = head -> next;
    head -> data = exp[s];
    head -> prev = prev;
    prev = head;
    s++;
  }


  head = root;
  while(head != NULL) {
    printf("%p: %p %c %p\n", head, head -> prev, head -> data, head -> next);
    head = head -> next;
  }

  printf("%d", evaluate(root, 0));

  return 0;
}
