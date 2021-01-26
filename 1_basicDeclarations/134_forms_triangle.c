#include <stdio.h>

int main() {
  int a,b,c;
  printf("Input the three sides of a triangle:\n");
  scanf("%d %d %d", &a, &b, &c);
  int right_ang = 0;
  if (c * c == b * b + a * a) right_ang = 1;

  if(right_ang) {
    printf("Right Triangle\n");
  } else {
    printf("It is not a right angle triangle!\n");
  }
  return 0;
}
