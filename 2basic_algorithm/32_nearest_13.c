#include <stdio.h>

int test(int a, int b) {
  if(a > 13 && b > 13) return 0;
  if(a > 13) return b;
  if(b > 13) return a;
  return 13 - a > 13 - b ? b : a;

}

int main() {
  printf("%d\n", test(5, 4));
  printf("%d\n", test(12, 11));
  printf("%d\n", test(13, 12));
  printf("%d\n", test(14, 15));


  return 0;
}
