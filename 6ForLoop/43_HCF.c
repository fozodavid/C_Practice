#include <stdio.h>

int main() {
  int first, second;
  printf("First: ");
  scanf("%d", &first);
  printf("Second: ");
  scanf("%d", &second);

  int hcf = 1;
  for (int i = 1; i < 120; i++) {
    if (first % i == second % i) {
      hcf = i;
    }
  }
  printf("HCF: %d\n", hcf);

  return 0;
}
