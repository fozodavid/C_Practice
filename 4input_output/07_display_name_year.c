#include <stdio.h>

int main() {
  char * firstname;
  char * lastname;
  int year;

  printf("Input your firstname: ");
  scanf("%s", firstname);

  /* printf("Input your lastname: "); */
  /* scanf("%s", lastname); */

  printf("Input your year of birth: ");
  scanf("%d", &year);

  printf("%s %d\n", firstname, year);
  return 0;
}
