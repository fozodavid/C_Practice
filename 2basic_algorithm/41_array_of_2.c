#include <stdio.h>

int test(int arr[]) {
  return arr[0] == 15 || arr[1] == 15 || arr[0] == 20 || arr[1] == 20;
}

int main() {
  int myarr1[2] = {15, 0};
  int myarr2[2] = {5, 20};
  int myarr3[2] = {0, 2};
  printf("%d\n", test(myarr1));
  printf("%d\n", test(myarr2));
  printf("%d\n", test(myarr3));
  return 0;
}
