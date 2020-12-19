#include <stdio.h>

int main() {
  int size = 0;
  scanf("%d", &size);

  for (int i = 0; i < size; i++) {
    for (int k = 0; k < size; k++) {
      printf("# ");
    }
    printf("\n");
  }
    
  return 0;
}
