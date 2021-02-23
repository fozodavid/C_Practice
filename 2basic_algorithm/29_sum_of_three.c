#include <stdio.h>
// sum of three, if two are the same return the third

int test(int a, int b, int c) {
  if (a == b) return c;
  if (c == b) return a;
  if (a == c) return b;
  return a + b + c;

}

int main() {

  printf("%d\n", test(16, 22, 22));
  printf("%d\n", test(10, 9, 4));
  printf("%d\n", test(12, 4, 4));
  printf("%d\n", test(4, 5, 9));


  return 0;
}
