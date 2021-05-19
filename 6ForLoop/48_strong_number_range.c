/* #include <stdio.h> */
/* // maybe link together */

/* int isPrime (int num) { */
  /* if (num <= 1) return 0; */
  /* if (num == 2) return 1; */
  /* if (!(num % 2)) return 0; */
  /* if (num == 3) return 1; */
  /* int prime = 1; */
  /* for (int i = 3; i < num; i += 2) { */
    /* if (!(num % i)) { */
      /* prime = 0; */
      /* break; */
    /* } */
  /* } */
  /* return prime; */
/* } */

/* int isStrong(int input, int primes[]) { */
  /* if (!(isPrime(input))) { */
    /* return 0; */
  /* } */
  /* for (int i = 0; primes[i] != 0; i++) { */
    /* if (input == primes[i]) { */
      /* if (((primes[i - 1] + primes[i + 1]) / 2) < primes[i]) { */
        /* return 1; */
      /* } else { */
        /* return 0; */
      /* } */
    /* } */
  /* } */
/* } */

/* int main() { */
  /* int primes[500] = {0}; */
  /* primes[0] = 2; */
  /* int count = 1; */
  /* for (int i = 3; i < 500; i++) { */
    /* if (isPrime(i)) { */
      /* primes[count++] = i; */
    /* } */
  /* } */

  /* int first, second; */
  /* printf("First: "); */
  /* scanf("%d", &first); */
  /* printf("Second: "); */
  /* scanf("%d", &second); */

  /* printf("Strong Numbers: "); */
  /* for (int i = first; i < second; i++) { */
    /* if (isStrong(i, primes)) printf("%d ", i); */
  /* } */
  /* printf("\n"); */

  /* return 0; */
/* } */


#include<stdio.h>
int main() {
  int range1,range2,i,j;
  printf("Enter a range:");
  scanf("%d %d", &range1, &range2);
  printf("Strong numbers between %d and %d are: ",range1,range2);
  for(i=range1;i<=range2;i++) {
    int num2=i;
    int num1=i;
    int sum=0;
    int fact=1;
    while(num1!=0) {
      fact=1;
      int rem=num1%10;
      num1=num1/10;
      for(j=1;j<=rem;j++) fact=fact*j;
      sum=sum+fact;
   }
   if(sum==num2) printf("%d ",i);
 }
}
