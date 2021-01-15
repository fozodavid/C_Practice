#include <stdio.h>
#define NOTES_LENGTH 4
#define COINS_LENGTH 2

int main() {
  float notes[NOTES_LENGTH] = {100, 50, 5, 2};
  float coins[COINS_LENGTH] = {.5, .25};
  float value;

  printf("Input the currency value (floating point with two decimal places): ");
  scanf("%f", &value);

  printf("\nCurrency Notes:\n");
  int i = 0;
  int result;
  float note;
  while (i < NOTES_LENGTH) {
    note = notes[i];
    result = value / note;
    printf("%.0f number of Note(s): %d\n", note, (int)result);
    value = value - result * note;
    i++;
  }
  printf("\nCurrency Coins:\n");

  i = 0;
  float coin;
  while (i < COINS_LENGTH) {
    coin = coins[i];
    result = value / coin;
    printf("%.2f number of Coin(s): %d\n", coin, (int)result);
    value = value - result * coin;
    i++;
  }

  return 0;
}
