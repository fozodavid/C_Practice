#include <stdio.h>
#include <stdlib.h>
#define LEN 20

int main() {
  char buffer[LEN];
  double my_double;

  printf("Input a double: ");
  fgets(buffer, LEN, stdin);

  my_double = strtod(buffer, NULL);
  printf("Output: %f\n\n", my_double);
  return 0;
}
