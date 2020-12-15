#include <stdio.h>

int main() {
  int a,b;
  int smaller, larger;

  printf("Input first number of the pair: ");
  scanf("%d", &a);
  printf("Input second number of the pair: ");
  scanf("%d", &b);
  if (a < b) {
    smaller = a; larger = b;
  } else {
    smaller = b; larger = a;
  }

  
  int i;
  int sum = 0;
  for (i = smaller % 2 == 0 ? smaller + 1 : smaller; i < larger; i = i + 2) {
    sum += i;
    printf("%d\n", i);
  }
  printf("Sum=%d\n", sum);

  return 0;
}
