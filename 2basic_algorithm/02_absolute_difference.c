#include <stdio.h>
#define PIVOT 51

int main() {
  int n, diff;
  printf("Put in n:\n");
  scanf("%d", &n);

  printf("Output\n");
  if (n > PIVOT) printf("%d\n", (n - PIVOT) * 3);

  if (n <= PIVOT) printf("%d\n", (PIVOT - n));

  return 0;
}
