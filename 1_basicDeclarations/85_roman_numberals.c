#include <stdio.h>

char rom_ones[10][6] = {
  "",
  "I",
  "II",
  "III",
  "IV",
  "V",
  "VI",
  "VII",
  "VIII",
  "IX"
};

char rom_tens[10][6] = {
  "",
  "X",
  "XX",
  "XXX",
  "XL",
  "L",
  "LX",
  "LXX",
  "LXXX",
  "XC"
};

char * get_numberal(int decimal) {
  int ones = decimal % 10;
  int tens = (decimal % 100) / 10;
  printf("%s", rom_tens[tens]);
  printf("%s\n", rom_ones[ones]);
}

int main() {
  printf("Decimal\tRoman\n");
  printf("number\tnumberal\n");
  printf("--------------------------\n");

  for (int i = 0; i < 100; i++) {
    printf("%d\t", i);
    get_numberal(i);
  }

  return 0;
}

