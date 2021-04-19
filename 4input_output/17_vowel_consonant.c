#include <stdio.h>

int main() {
  char token;
  printf("Test Data: ");
  scanf("%c", &token);

  char vowels[] = {'a', 'e', 'i', 'o', 'u'}; 
  char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'}; 

  int size = sizeof(vowels) / sizeof(char);
  int i = 0;
  int result = 0;
  while (i < size && !result) {
    if (token == vowels[i]) {
      printf("This character is a vowel.\n");
      result = 1;
      break;
    }
    i++;
  }

  i = 0;
  size = sizeof(consonants) / sizeof(char);
  while (i < size && !result) {
    if (token == consonants[i]) {
      printf("This character is a consonant.\n");
      result = 1;
      break;
    }
    i++;
  }

  return 0;
}
