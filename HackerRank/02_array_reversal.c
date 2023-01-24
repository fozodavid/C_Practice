#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int *arr2;
    arr2 = (int *) malloc(num * sizeof(int));

    int k = 0;
    for (i = num - 1; i > -1; i--) {
      arr2[i] = arr[k];
      k++;
    }

    for (i = 0; i < num; i++) {
      arr[i] = arr2[k];
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
