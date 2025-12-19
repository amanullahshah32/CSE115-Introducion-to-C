#include <stdio.h>

int main() {
    char A[100], B[50];

    printf("Enter first string: ");
    gets(A);

    printf("Enter second string: ");
    gets(B);

    int i = 0, j = 0;

    while (A[i] != '\0')
    {
        i++;
    }
    A[i++]=' ';

    while (B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }

    A[i] = '\0';

    printf("After Concatenating: %s\n",A);

    return 0;
}
