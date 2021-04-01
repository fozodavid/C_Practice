#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr_size;
    int a1[] = {1, 2, 0, 3, 5, 7, 0, 9, 11, 5};
    arr_size = sizeof(a1)/sizeof(a1[0]);
    printf("Elements in original array are: ");
    print_array(a1, arr_size);

    int size = arr_size, index = 0;
    int result[size];
    for (int i = 0; i < size; i++) {
        if (a1[i] != 5)
        {
            result[index++] = a1[i];
        }
    }

    arr_size = sizeof(result)/sizeof(result[0]);
    printf("\nElements in new array are: ");
    print_array(result, arr_size);
}

print_array(int parray[], int size)
  {
   int i;
   for( i=0; i<size-1; i++)
    {
        printf("%d, ", parray[i]);
    }
   printf("%d ", parray[i]);
   printf("\n");
}
