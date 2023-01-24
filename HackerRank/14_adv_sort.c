#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int lexicographic_sort(const char* a, const char* b) {
    int i = 0;
    for (i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if (a[i] > b[i]) {
            return 1;
        } else if (a[i] < b[i]) {
            return 0;
        }
    }
    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    int i = 0;
    do {
        if (a[i] < b[i]) {
            return 1;
        } else if (a[i] > b[i]) {
            return 0;
        }
        i++;
    }
    while (a[i] != '\0' || b[i] != '\0');
    return 0;
}

int sort_by_length(const char* a, const char* b) {
    // swap when: a > b, same length;
    // do not swap: b > a;
    int i = 0;
    while (1) {
        if (a[i] != '\0' && b[i] == '\0') {
            return 1;
        } else if (a[i] == '\0' && b[i] != '\0') {
            return 0;
        } else if (a[i] == '\0' && b[i] == '\0') {
            return lexicographic_sort(a, b);
        }
        i++;
    };
    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int i = 0;
    int * dist_a = calloc(26, sizeof(int));
    int * dist_b = calloc(26, sizeof(int));

    for (i = 0; a[i] != '\0'; i++) {
        if (dist_a[(int)a[i] - 97] == 0) {
            dist_a[(int)a[i] - 97]++;
        }
    }

    for (i = 0; b[i] != '\0'; i++) {
        if (dist_b[(int)b[i] - 97] == 0) {
            dist_b[(int)b[i] - 97]++;
        }
    }

    int suma, sumb;
    suma = sumb = 0;
    for (i = 0; i < 26; i++) {
        suma += dist_a[i];
    }

    for (i = 0; i < 26; i++) {
        sumb += dist_b[i];
    }
    if (suma == sumb) return lexicographic_sort(a, b);
    if (suma > sumb) return 1;
    return 0;
}



void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int i, j;
    char *temp = NULL;
    for (i = 0; i < len - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < len - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}
