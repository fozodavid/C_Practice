#include <stdio.h>

int main() {
  int digit;
  char name[15];
  printf("Test Data: ");
  scanf("%d", &digit);

  switch (digit) {
    case 0:
      strcpy(name, "Zero");
      break;
    case 1:
      strcpy(name, "One");
      break;
    case 2:
      strcpy(name, "Two");
      break;
    case 3:
      strcpy(name, "Three");
      break;
    case 4:
      strcpy(name, "Four");
      break;
    case 5:
      strcpy(name, "Five");
      break;
    case 6:
      strcpy(name, "Six");
      break;
    case 7:
      strcpy(name, "Seven");
      break;
    case 8:
      strcpy(name, "Eight");
      break;
    case 9:
      strcpy(name, "Nine");
      break;
    default:
      strcpy(name, "Not a digit");
  }
  printf("%s\n", name);
  return 0;
}
