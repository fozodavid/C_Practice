#include <stdio.h>

int isArmstrong(int num) {
  int r,sum=0,temp;
  for(temp=num;num!=0;num=num/10){
    r=num % 10;
    sum=sum+(r*r*r);
  }
  return sum == temp;
}

int main() {
  int start, end;

  printf("Input start: ");
  scanf("%d", &start);
  printf("Input end: ");
  scanf("%d", &end);

  printf("Armstrong numbers: ");
  int i;
  for (i = start; i <= end; i++) {
    if (isArmstrong(i)) printf("%d ", i);
  }
  printf("\n");

  return 0;
}
