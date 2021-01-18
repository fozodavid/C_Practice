#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2);

int main() {
  int x1, x2, y1, y2;

  printf("Input x1: ");
  scanf("%d", &x1);
  printf("Input y1: ");
  scanf("%d", &y1);
  printf("Input x2: ");
  scanf("%d", &x2);
  printf("Input y2: ");
  scanf("%d", &y2);

  printf("Distance between the said points: %.4f\n", distance(x1, y1, x2, y2));
  return 0;
}

float distance(int x1, int y1, int x2, int y2) {
  int hor_dist = x2 - x1;
  int vert_dist = y2 - y1;

  return sqrt(pow(hor_dist, 2) + pow(vert_dist, 2));
}
