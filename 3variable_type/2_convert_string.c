#include <stdio.h>

int main() {
  signed short myint = 1;
  printf("%d\n\n", sizeof(myint));

  for (int i = 0; i < 65000; i += 1000) {
    printf("%10d", myint);
    if (!(i % 10000)) printf("\n");
    myint += 1000;
  }
  printf("%d\n");

  return 0;
}
