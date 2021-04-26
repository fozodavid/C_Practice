#include <stdio.h>


int main() {
  char token;
  int num;
  printf("Test Data: ");
  scanf("%d", &num);

  int i, k;
  for (i = 1; i < num; i++) {
    if (i % 2) token = '0';
    else token = '1';
    k = 0;
    while (k < i) {
      if (token == '1') token = '0';
      else if (token == '0') token = '1';
      printf("%c", token);
      k++;
    }    
    printf("\n");
  }

  return 0;
}
