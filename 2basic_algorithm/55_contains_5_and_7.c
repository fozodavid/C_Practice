#include <stdio.h>

int test(int array[], int size) {
  int i = 0;
  int contains_5 = 0;
  int contains_7 = 0;
  while (i < size) {
    if (array[i] == 5) contains_5 = 1;
    if (array[i] == 7) contains_7 = 1;
    i++;
  }
  return contains_5 && contains_7;
}

int main() {
  int myarr[10] = {1,2,3,4,5,6,7,8,9,10};

  printf("%d\n", test(myarr, 10));
  return 0;
}
