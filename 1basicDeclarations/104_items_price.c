#include <stdio.h>
#include <limits.h>
#define LENGTH 5

enum table_entry{MIN, MAX, INC};

int main() {
  float price_table[LENGTH][3] = {
    {100, 400, 0.14},
    {400, 800, 0.11},
    {800, 1200, 0.09},
    {1200.00, 2000.00, 0.06}, 
    {2000.00, 100000.00, 0.03},
  };

  float price;
  printf("Input the item price: ");
  scanf("%f", &price);

  int i = 0;
  float new_price;
  float min, max, increase;
  while (i < LENGTH) {
    min = price_table[i][MIN];
    max = price_table[i][MAX];
    if (price > min && price < max) {
      increase = price_table[i][INC];
      new_price = (float)price * (1 + increase);
      printf("New Item price: %.2f\n", new_price);
      printf("Increased price: %.2f\n", new_price - price);
      printf("Increase percentage %.0f%%\n", increase * 100);
    }
    i++;
  }

  return 0;
}
