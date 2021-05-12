#include <stdio.h>

int main() {
  int first, second;
  printf("First: ");
  scanf("%d", &first);
  printf("Second: ");
  scanf("%d", &second);

  int lcm = 0;
  for (int i = 32000; i > 1; i--) {
    if (i % first == 0 && i % second == 0) lcm = i;
  }

  printf("%d\n", lcm);



  return 0;
}
