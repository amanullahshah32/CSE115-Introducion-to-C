#include <stdio.h>

int main() {
    char A[100], B[50];
    int i, j;

    printf("Enter first string: ");
    fgets(A, sizeof(A), stdin);

    i = 0;
    while (A[i] != '\0') {
        if (A[i] == '\n') {
            A[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter second string: ");
    fgets(B, sizeof(B), stdin);

    i = 0;
    while (B[i] != '\0') {
        if (B[i] == '\n') {
            B[i] = '\0';
            break;
        }
        i++;
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

    printf("After joining, first string is: %s\n", A);

    return 0;
}
