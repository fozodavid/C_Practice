#include <stdio.h>

int append_next(int sum, int current, int remain, int arr) {
  if (!remain && arr == sum) {
    return 1;
  }
  if (!remain) {
    return 0;
  }
  
  int i = current + 1, results = 0;
  while (i <= sum - remain) {
    results += append_next(sum, i, remain - 1, arr + i);
    i++;
  }
  return results;
}

int main() {
  int n, sum;
  printf("Input the number of samples:\n"); //TODO: Must be some jargon
  scanf("%d", &n);

  printf("Sum of the digits:\n");
  scanf("%d", &sum);


  int i = 0, results = 0;
  while(i <= sum - n) {
    results += append_next(sum, i, n - 1, i);
    i++;
  }

  printf("Number of combinations: %d\n", results);

  return 0;
}
