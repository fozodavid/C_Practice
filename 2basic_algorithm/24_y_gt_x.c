#include <stdio.h>

int test(int x, int y, int z) {
  return y > x && z > y;

}

int main() {
  printf("%d\n", test(10, 20, 30));
  printf("%d\n", test(30, 20, 10));

  return 0;
}
