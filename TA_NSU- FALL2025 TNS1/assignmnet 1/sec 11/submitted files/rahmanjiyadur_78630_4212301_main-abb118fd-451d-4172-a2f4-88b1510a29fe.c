#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
Declare two strings A and B of size 100 and 50 respectively. Then take user input for
both the string. Concatenate (join) B at the end of A using loop [you are not allowed to
use library functions]. Display the final string after concatenation.
    */

    char A[100], B[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%s", A);

    printf("Enter second string: ");
    scanf("%s", B);

    while(A[i] != '\0'){
        i++;
    }

    // append B to A
    while(B[j] != '\0'){
        A[i] = B[j];
        i++;
        j++;
    }

    A[i] = '\0';

    printf("After joining, first string is: %s", A);


    return 0;
}
