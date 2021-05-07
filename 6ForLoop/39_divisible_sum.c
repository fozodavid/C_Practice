#include <stdio.h>

int main() {
  int sum = 0;
  printf("Numbers divisible by 9:\n");
  for(int i = 100; i <= 200; i++) {
    if (!(i % 9)) {
      sum += i;
      printf("%d ", i);
    }
  }
  printf("\nThe sum: %d", sum);
  
  return 0;
}
