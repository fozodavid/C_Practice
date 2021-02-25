#include <stdio.h>

int test(int * array, int len) {
  return array[0] == array[len - 1];
}

int main() {
  int myarray[] = {1,2,3,4,1};
  int length = 5;

  printf("%d\n", test(myarray, length));
  return 0;
}
