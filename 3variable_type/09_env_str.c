#include<stdio.h>
#include<stdlib.h>

int main() {
  char * PathPtr;

  PathPtr = getenv("PATH");

  if (PathPtr != NULL) printf("\nThe set path is: %s\n\n", PathPtr);

  return 0;
}
