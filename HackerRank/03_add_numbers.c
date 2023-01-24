#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
	
    printf("%d %d\n", a + b, b - a);
    printf("%.2f %.2f\n", c + d, d - c);
    
    return 0;
}

