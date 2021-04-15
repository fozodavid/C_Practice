#include <stdio.h>
#include <stdlib.h>

int main() {
  int height;

  printf("Test Data: ");
  scanf("%d", &height);

  if (height <= 0) {
    printf("Wrong Input\n");
    return 0;
  }

  if (height > 270) {
    printf("This is not a human\n");
    return 0;
  }

  char * category;
  if ((height > 0) && (height <= 135)) category = "dwarf";
  if ((height > 135) && (height <= 160)) category = "short";
  if ((height > 160) && (height <= 180)) category = "average height";
  if ((height > 180) && (height <= 200)) category = "tall";
  if ((height > 200) && (height <= 270))  category = "giant";

  printf("This person is a %s\n", category);

  return 0;
}
