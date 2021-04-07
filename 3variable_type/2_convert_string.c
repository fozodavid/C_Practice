#include <stdio.h>

/* int main() { */
  /* unsigned long myint; */
  /* char mychar[8] = "1234567"; */

  /* myint = (unsigned long)mychar; */
  /* printf("%d\n\n", myint); */

  /* return 0; */
/* } */

int main() {
  char buffer[120];
  unsigned long ul;

  printf("\nInput an unsigned number: ");
  fgets(buffer, 120, stdin);

  ul = strtoul(buffer, NULL, 0);
  printf("Output: %lu\n\n", ul);
  return 0;
}
