#include <stdio.h>

int main() {
  int age;
  printf("Test Data: ");
  scanf("%d", &age);

  if (age >= 21) {
    printf("Congratulations! You are eligible for casting your vote.\n");
  } else {
    printf("You aren't eligible for casting your vote.\n");
  }

  return 0;
}
