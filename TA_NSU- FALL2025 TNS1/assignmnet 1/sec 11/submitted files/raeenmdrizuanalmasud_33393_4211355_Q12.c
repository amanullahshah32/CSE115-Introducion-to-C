/* 12. Declare two strings A and B of size 100 and 50 respectively. Then take user input for
both the string. Concatenate (join) B at the end of A using loop [you are not allowed to
use library functions]. Display the final string after concatenation.
Enter first string: Bangla
Enter second string: desh
After joining, first string is: Bangladesh */

#include <stdio.h>

int main()
{
    char A[100], B[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(A, sizeof(A), stdin);
    while(A[i] != '\n' && A[i] != '\0') i++;
    A[i] = '\0';

    printf("Enter second string: ");
    fgets(B, sizeof(B), stdin);
    while(B[j] != '\n' && B[j] != '\0') j++;
    B[j] = '\0';

    i = 0;
    while(A[i] != '\0') i++;

    j = 0;
    while(B[j] != '\0')
    {
        A[i] = B[j];
        i++;
        j++;
    }
    A[i] = '\0';

    printf("After joining, first string is: %s\n", A);

    return 0;
}
