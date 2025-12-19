#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[100], B[50];
    int i = 0, j = 0;

    printf("Enter string A: ");
    fgets(A, sizeof(A), stdin);

    while (A[i] != '\0') {
        if (A[i] == '\n') {
            A[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter string B: ");
    fgets(B, sizeof(B), stdin);

    j = 0;
    while (B[j] != '\0') {
        if (B[j] == '\n') {
            B[j] = '\0';
            break;
        }
        j++;
    }

    i = 0;
    while (A[i] != '\0') {
        i++;
    }

    j = 0;
    while (B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }

    A[i] = '\0';
    printf("Concatenated string: %s\n", A);
    return 0;
}
