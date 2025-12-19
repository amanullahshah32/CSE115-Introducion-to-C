#include <stdio.h>

#define ASZ 100
#define BSZ 50

/* Remove a trailing newline, if present (loop-based). */
void strip_newline(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') { s[i] = '\0'; break; }
        i++;
    }
}

/* Concatenate src to the end of dest using only loops. */
void concat(char dest[], int dest_cap, const char src[]) {
    int i = 0;
    /* Find end of dest. */
    while (i < dest_cap && dest[i] != '\0') i++;

    int j = 0;
    while (src[j] != '\0' && i < dest_cap - 1) {
        dest[i] = src[j];
        i++;
        j++;
    }
    if (dest_cap > 0) dest[i] = '\0';
}

int main(void) {
    char A[ASZ];
    char B[BSZ];

    printf("Enter first string: ");
    if (!fgets(A, ASZ, stdin)) return 1;
    strip_newline(A);

    printf("Enter second string: ");
    if (!fgets(B, BSZ, stdin)) return 1;
    strip_newline(B);

    concat(A, ASZ, B);

    printf("After joining, first string is: %s\n", A);
    return 0;
}
