#include <stdio.h>

int main() {
  printf("Ch Dec Hex\n");
  for (int i = 32; i <= 63; i++) {
    printf("|  ");
    for (int k = 0; k < (7*32); k+=32) {
      printf("%1char %3d 0x%x |  ", i+k, i+k, i+k);
    }
    printf("\n");
  }

  return 0;
}
