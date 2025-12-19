#include <stdio.h>
#include <stdlib.h>

//12) Declare two strings A and B of size 100 and 50 respectively. Then take user input for both the string. Concatenate (join) B at the end of A using loop [you are not allowed to use library functions]. Display the final string after concatenation.

int main()
{
    char A[100];
    char B[50];
    int i=0,j=0;
    printf("Enter first string: ");
    fgets(A, sizeof(A), stdin);
    printf("Enter second string: ");
    fgets(B, sizeof(B), stdin);
    while(A[i] != '\0')
    {
        if(A[i]=='\n')
        {
            A[i]='\0';
            break;
        }
        i++;
    }
    i=0;
    while(A[i] != '\0')
    {
        i++;
    }
    while(B[j] != '\0' && B[j] != '\n')
    {
        A[i] = B[j];
        i++;
        j++;
    }

    A[i] = '\0';

    printf("After joining, first string is: %s", A);

return 0;
}
