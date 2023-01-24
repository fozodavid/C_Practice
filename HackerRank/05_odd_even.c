#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int print_odd_even(int a);

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int i = a; i <= b; i++ ) {
      print_odd_even(i);
    }

    return 0;
}

int print_odd_even(int a) {
  switch (a) {
    case 1: printf("one\n"); break;
    case 2: printf("two\n"); break;
    case 3: printf("three\n"); break;
    case 4: printf("four\n"); break;
    case 5: printf("five\n"); break;
    case 6: printf("six\n"); break;
    case 7: printf("seven\n"); break;
    case 8: printf("eight\n"); break;
    case 9: printf("nine\n"); break;
    default:
      a % 2 ? printf("odd\n") : printf("even\n");
  }
  return 0;
};

