#include <stdio.h>

void update(int *a,int *b) {
    int result_a, result_b;
    result_a = *a + *b;
    result_b = *a >= *b ? *a - *b : *b - *a;

    (*a) = result_a;
    (*b) = result_b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
