#include <stdio.h>
#define LENGTH 30

int main() {
  char first[LENGTH];
  char second[LENGTH];
  printf("Input the first string:\n");
  scanf("%s", first);
  printf("Input the second string:\n");
  scanf("%s", second);

  int i = 0, k = 0, present = 0;
  while (i < LENGTH) {
    if (first[i] == '\0') break;

    if (first[i] == second[k]) {
      while (first[i + k] == second[k]){
        if (second[k + 1] == '\0') {
          present = 1;
          break;
        }
        k++;
      }
    }
    i++;
  }
  printf("\n");
  printf("Is second string present in the last part of the first string?\n");
  present ? printf("Present!\n") : printf("Not present!\n");
  return 0;
}
