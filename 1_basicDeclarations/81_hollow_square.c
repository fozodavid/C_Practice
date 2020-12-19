#include <stdio.h>

int main() {
  int size = 0;
  scanf("%d", &size);

  for (int i = 0; i < size; i++) {
    for (int k = 0; k < size; k++) {
      if ((i == 0 || i == size - 1) || (k == 0 || k == size - 1)) {
        printf("#");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
    
  return 0;
}

