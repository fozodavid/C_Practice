#include <stdio.h>
#include <stdlib.h>
#define LEN 20

int main() {
  char buffer[LEN];
  double db;

  printf("\nInput a double number: ");
  fgets(buffer, LEN, stdin);

  db = strtod(buffer, NULL);
  printf("Output: %f\n\n", db);
  return 0;
}
