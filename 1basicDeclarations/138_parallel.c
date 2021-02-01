#include <stdio.h>
#define LENGTH 4

struct Point {
  int x;
  int y;
};

int main() {
  struct Point points[LENGTH];

  int i = 0;
  while (i < LENGTH) {
    printf("Input P(x%d,y%d):\n", i, i);
    scanf("%d %d", &points[i].x, &points[i].y);
    i++;
  }

  struct Point P = points[0];
  struct Point Q = points[1];
  struct Point R = points[2];
  struct Point S = points[3];

  if ((float)(Q.y - P.y) / (Q.x - P.x) == (float)(S.y - R.y) / (S.x - R.x)) {
    printf("PQ and RS are parallel!\n");
  } else {
    printf("PQ and RS are not parallel!\n");
  }

  return 0;
}
