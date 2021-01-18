#include <stdio.h>

int main() {
  int input;
  int notes[] = {100, 50, 20, 10, 5, 2, 1};

  printf("Input the amount: \n");
  scanf("%d", &input);

  printf("There are: \n");
  int i;
  int curr = input;
  for(i = 0; i < 7; i++) {
		printf("%d Note(s) of %d.00\n", curr / notes[i], notes[i]);
    curr %= notes[i];
  }

  return 0;
}
