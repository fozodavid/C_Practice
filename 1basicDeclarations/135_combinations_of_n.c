#include <stdio.h>
#include <string.h>
#include <malloc.h>

int ALL_COMB = 0;

void get_combinations(int *array, int index) {
  if (array[index] == 0) return;
  while (index > 0 && array[index] > 0) {
    array[index - 1]++;
    array[index]--;
    ALL_COMB++;
    printf("%d, %d, %d, %d\n", array[0], array[1], array[2], array[3]);

    int * new_array = malloc(sizeof(int) * 4);
    memcpy(new_array, array, sizeof(int) * 4);
    get_combinations(new_array, index-1);
    free(new_array);
  }
}

int main() {
  int input;
  printf("Input a number:\n");
  scanf("%d", &input);
  int array[4] = {0,0,0,input};

  printf("%d, %d, %d, %d\n", array[0], array[1], array[2], array[3]);
  ALL_COMB = 1;
  get_combinations(array, 3);
  printf("Total number of combinations:\n%d\n", ALL_COMB);

  return 0;
}
