#include <stdio.h>
#include <string.h>
#include <malloc.h>

int all_comb = 0;

void get_combinations(int *array, int index) {
  if (array[index] == 0) return;
  while (index > 0 && array[index] > 0) {
    array[index - 1]++;
    array[index]--;
    all_comb++;

    int * new_array = malloc(sizeof(int) * 4);
    memcpy(new_array, array, sizeof(int) * 4);
    get_combinations(new_array, index-1);
    free(new_array);
  }
}

int main() {
  int input;
  printf("Input a positive integers:\n");
  scanf("%d", &input);
  int array[4] = {0,0,0,input};

  all_comb = 1;
  get_combinations(array, 3);
  printf("\nNumber of combinations of p,q,r,s:\n%d\n", all_comb);

  return 0;
}
