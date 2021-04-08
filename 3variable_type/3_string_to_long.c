#include <stdio.h>
#define LEN 120

int main() {
  char buffer[LEN];
  long lo;

  printf("\nInput a number: ");
  fgets(buffer, LEN, stdin);

  lo = strtol(buffer, NULL, 0);
  printf("Output: %d\n\n", lo);
  return 0;
}

// SOLUTION
//
// #include<stdio.h>
/* #include<stdlib.h> */
/* int main () */
/* { */
	/* char buffer[] = "2016 40a0b0 -1101110100110111100110 0x5abfff"; */
	/* char * ptr_end; */
	/* long int i1, i2, i3, i4; */

	/* i1 = strtol (buffer,&ptr_end,10); */
	/* i2 = strtol (ptr_end,&ptr_end,16); */
	/* i3 = strtol (ptr_end,&ptr_end,2); */
	/* i4 = strtol (ptr_end,NULL,0); */
	/* printf ("\nIn decimals: %ld, %ld, %ld, %ld.\n\n", i1, i2, i3, i4); */
	/* return 0; */
/* } */
