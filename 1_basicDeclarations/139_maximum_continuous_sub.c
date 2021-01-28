#include <stdio.h>
#include <limits.h>

int main() {
  int length;
  printf("Input number of terms in the sequence:\n");
  scanf("%d", &length);
  int array[length];

  printf("Input the terms of the said sequence:\n");
  int i = 0;
  while (i < length) {
    scanf("%d", &array[i]);
    i++;
  }

  int start = 0, len = 1, j = 0;
  int max = INT_MIN;
  int temp;

  while (len <= length) {
    start = 0;
    while(start <= length - len) {
      j = start;
      temp = 0;
      while (j < len + start) {
        temp += array[j];
        j++;
      }
      if (temp > max) max = temp;
      start++;
    }
    len++;
  }

  printf("Maximum sum of a continuous subsequence:\n%d\n", max);

  return 0;
}
