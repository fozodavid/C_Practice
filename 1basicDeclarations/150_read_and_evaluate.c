#include <stdio.h>

#define LEN 20

int main() {
  char exp[LEN];
  printf("Input an exp using +, -, *, / operators:\n");
  scanf("%s", exp);

  int i = 0;
  char signs[10];
  int s = 0;
  while(exp[i] != '\0') {

    if (exp[i] == '+' || exp[i] == '-') {
      signs[s] = exp[i];
      s++;
    }
    i++;
  }

  printf("%s", signs);

  return 0;
}
