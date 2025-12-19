#include <stdio.h>
int main()
{
    char A[100], B[50];
    printf("\n enter first string:");
    fgets(A, sizeof(A), stdin);
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == '\n')
        {
            A[i] = '\0';
            break;
        }
    }

    printf("\n enter second string:");
    fgets(B, sizeof(B), stdin);
    for (int i = 0; B[i] != '\0'; i++)
    {
        if (B[i] == '\n')
        {
            B[i] = '\0';
            break;
        }
    }

    int i;
    for (i = 0; A[i] != '\0'; i++)
        ;

    for (int j = 0; B[j] != '\0'; i++, j++)
    {
        A[i] = B[j];
    }
    A[i] = '\0';

    printf("%s\n", A);
    return 0;
}