#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int op_number = 10000;
    int result = 0;
    for (int i = 0; i < 5; i++) {
      result += n / op_number;
      n %= op_number;
      op_number /= 10;
    }

    printf("%d", result);

    return 0;
}

