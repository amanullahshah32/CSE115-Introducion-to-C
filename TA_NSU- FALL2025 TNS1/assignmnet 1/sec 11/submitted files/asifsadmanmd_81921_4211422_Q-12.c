#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[100];
    char B[50];

    printf("Enter first string: ");
    gets(A);
    printf("Enter second string: ");
    gets(B);

    int i = 0;
    while(A[i] != '\0')
    {
        i++;
    }

    int j = 0;
    while(B[j] != '\0')
    {
        A[i] = B[j];
        i++;
        j++;
    }
    A[i] = '\0';

    printf("After joining, first string is: %s", A);

    return 0;
}
