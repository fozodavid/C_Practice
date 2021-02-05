#include <stdio.h>

int test(int a, int b) {
  int a_dist = 100 - a;
  int b_dist = 100 - b;
  if (a_dist < b_dist) {
    return a;
  } else if (b_dist < a_dist) {
    return b;
  } else { 
    return 0;
  }
}

int main() {
  printf("%d\n", test(50, 60));
  printf("%d\n", test(30, 15));
  printf("%d\n", test(30, 30));
  return 0;
}
