#include <stdio.h>

#define LIMIT 199

int main() {
  int i;
  for(i = 1; i < LIMIT; i++) {
    int k;
    int prime = 1;
    for(k = 2; k < i; k++) {
      if(i % k == 0 && k != i) {
        prime = 0;
      }
    }
    if (prime) printf("%d ", i);
  }

  return 0;
}
