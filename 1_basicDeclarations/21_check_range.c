// check which range it belongs
// printf an error of greater than 80
#include <stdio.h>

int main() {
  int input = 0;
  printf("Input an integer: ");
  scanf("%d", &input);

  int range[8] = {0, 20, 30, 40, 50, 60, 80, 80};

  if (input > 80) {
    fprintf(stderr, "Integer bigger than 80. Error!");
  } else {
    int i;
    for (i = 0; i < 8; i++) {
      if (input >= range[i] && input < range[i+1]) {
        printf("Range [%d, %d]\n", range[i], range[i+1]);
      } else if (input > range[i] && input <= range[i+1]) {
        printf("Range [%d, %d]\n", range[i], range[i+1]);
      }
    }
  }
  return 0;
}
