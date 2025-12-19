#include <stdio.h>

int main() {

    char A[100], B[50];
    int i, j;

    printf("Enter first string: ");
    fgets(A, sizeof(A), stdin);

    printf("Enter second string: ");
    fgets(B, sizeof(B), stdin);


    for(i = 0; A[i] != '\0'; i++) {
        if(A[i] == '\n') {
            A[i] = '\0';
            break;
        }
    }

    for(i = 0; B[i] != '\0'; i++) {
        if(B[i] == '\n') {
            B[i] = '\0';
            break;

        }
    }


    for(i = 0; A[i] != '\0'; i++);

    for(j = 0; B[j] != '\0'; j++, i++) {
        A[i] = B[j];
    }

    A[i] = '\0';

    printf("After joining, first string is: %s\n", A);

    return 0;
}
