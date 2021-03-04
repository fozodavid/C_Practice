#include <stdio.h>

int main() {
  int myarr[3] = {1,5,7};

  int i = 0;
  while(i < 3 - 1) {
    if (myarr[i] == 5 && myarr[i + 1] == 7) {
      myarr[i + 1] = 1;
    }
    i++;
  }

  i = 0;
  while (i < 3) {
    printf("%d\n", myarr[i]);
    i++;
  }
  
  return 0;
}
