#include <stdio.h>
#include <limits.h>

#define LENGTH 100

struct Tuple {
  int number;
  int freq;
};

int main() {
  int numbers[LENGTH];
  printf("Input the terms of the sequence:\n");
  int i = 0;
  while(i < LENGTH) {
    scanf("%d", &numbers[i]);
    i++;
  }
  numbers[i] = INT_MIN;

  int length = 0;
  i = 0;
  while(i < LENGTH) {
    if (numbers[i] == INT_MIN) length = i + 1;
    i++;
  }

  struct Tuple frequencies[length];

  i = 0;
  int k, hit = 0;
  while(i < LENGTH) {
    k = 0;
    while(frequencies[k].number) {
      if (frequencies[k].number == numbers[i]) frequencies[k].freq++;
      hit = 1;
      k++;
    }
    if (!hit) {
      frequencies[k].number = numbers[i];
      frequencies[k].freq = 1;
    }
    i++;
  }

  k = 0; int max = INT_MIN; int max_index = -1;
  while(frequencies[k].number) {
    if (max < frequencies[k].freq) {
      max = frequencies[k].freq;
      max_index = k;
    }
    k++;
  }

  printf("Most frequent number: %d\n", frequencies[max_index].number);
  return 0;
}
