#include <stdio.h>

int main() {
  float weight1, weight2;
  int pur1, pur2;

  puts("Provide first item's weight: ");
  scanf("%f", &weight1);
  puts("Provide number of purchases: ");
  scanf("%d", &pur1);

  puts("Provide first item's weight: ");
  scanf("%f", &weight2);
  puts("Provide number of purchases: ");
  scanf("%d", &pur2);

  printf("Average value: %f\n", ((weight1 * pur1) + (weight2 * pur2)) / (pur1 + pur2));
  return 0;
}
