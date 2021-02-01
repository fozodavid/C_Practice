#include <stdio.h>

int main() {
  int a, b;
  printf("Put in the integers:\n");
  scanf("%d %d", &a, &b);

  printf("Output:\n");
  if (a == b) { 
    printf("%d\n", a * 3);
  } else {
    printf("%d\n", a + b);
  }

  return 0;
}
