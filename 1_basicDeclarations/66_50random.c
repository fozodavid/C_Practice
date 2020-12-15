#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 50

int main() {
  FILE *fp;
  srand(time(0));

  fp = fopen("rand.dat", "w");
  fprintf(fp, "50\n");
  for(int i = 0; i < LIMIT; i++) {
    fprintf(fp, "%.2f\n", (float)(rand() % 10000) / 10000 - 0.5);
  }
  return 0;
}
