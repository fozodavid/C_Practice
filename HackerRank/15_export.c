#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_lex(char * a, char * b) {
    int i = 0;
    for (i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if (a[i] < b[i]) {
            return 1;
        } else if (a[i] > b[i]) {
            return 0;
        }
    }
    return 0;
}

int recursion(char **s, int last_pos, int max) {
    int n = last_pos;
    int current = n-1;
    char *curr_str = NULL;
    char *temp = NULL;
    int i, j, next;
    
    if (current == 0 && !is_lex(s[current], s[last_pos])) {
        return 0;
    } else if (is_lex(s[current], s[last_pos])) {
        curr_str = s[current];
        for (i = max - 1; i > current; i--) {
            for (j = max - 1; j > current + ((max - 1) - i); j--) {
                if (!is_lex(s[j-1], s[j])) {
                    temp = s[j];
                    s[j] = s[j-1];
                    s[j-1] = temp;
                }
            }
        }
        for (i = current; i < max; i++) {
            if (is_lex(curr_str, s[i])) {
                next = i;
                break;
            }
        }
        for (i = next; i != current; i--) {
            temp = s[i];
            s[i] = s[i - 1];
            s[i - 1] = temp;
        }
        return 1;
    } else {
        return recursion(s, n - 1, max);
    }
};

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    return recursion(s, n - 1, n);
}

