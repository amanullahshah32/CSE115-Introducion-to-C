#include <stdio.h>

int main(void)
{
    char A[100], B[50];
    int i, j;

    printf("Enter first string (A): ");
    gets(A);

    printf("Enter second string (B): ");
    gets(B);

    // find length of A
    for (i = 0; A[i] != '\0'; i++);

    // copy B to end of A
    for (j = 0; B[j] != '\0'; j++, i++) {
        A[i] = B[j];
    }
    A[i] = '\0';

    printf("After joining, first string is: %s\n", A);

    return 0;
}
