#include<stdio.h>

int main() {
  int m, n;

  printf("Input two integes (m, n):\n");
  scanf("%d", &m);
  scanf("%d", &n);

  int i = (m % 2 == 0) ? m  : m + 1;
  int left = n;
  int sum = 0;
  while (left > 0) {
    sum += i;
    i += 2;
    left--;
  }

  printf("Sum of %d even numbers starting from %d:\n%d\n", m, n, sum);

  return 0;
}
