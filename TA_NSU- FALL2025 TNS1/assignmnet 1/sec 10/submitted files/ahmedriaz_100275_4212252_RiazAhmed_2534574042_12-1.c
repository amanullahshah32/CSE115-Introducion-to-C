#include <stdio.h>

int main() {
    char A[100], B[50];
    int i, j;

    printf("Enter first string: ");
    gets(A);

    printf("Enter second string: ");
    gets(B);

    for (i = 0; A[i] != '\0'; i++);      // corrected 's' → 'A'

    for (j = 0; B[j] != '\0'; j++, i++)  // corrected 'str' → 'B'
        A[i] = B[j];

    A[i] = '\0';

    printf("After joining, first string is: %s", A);   // corrected printf

    return 0;
}