#include <stdio.h>

int getHCF(int first, int second) {
  int hcf = 1;
  for (int i = 1; i < 120; i++) {
    if (first % i == second % i) {
      hcf = i;
    }
  }
  return hcf;
}

int main() {
  int first, second;
  printf("First: ");
  scanf("%d", &first);
  printf("Second: ");
  scanf("%d", &second);

  int hcf = getHCF(first, second);
  printf("LCM: %d\n", first * second / hcf);


  return 0;
}
