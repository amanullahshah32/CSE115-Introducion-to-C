#include <stdio.h>

int main()
{
    char A[100], B[50];
    printf("Enter first string: ");
    gets(A);
    printf("Enter second string: ");
    gets(B);

    int lenA = 0;
    while(A[lenA] != '\0')
    {
        lenA++;
    }
    int k = 0;
    while(B[k] != '\0')
    {
        A[lenA + k] = B[k];
        k++;
    }
    A[lenA + k] = '\0';
    printf("After joining: %s\n", A);
    return 0;
}
