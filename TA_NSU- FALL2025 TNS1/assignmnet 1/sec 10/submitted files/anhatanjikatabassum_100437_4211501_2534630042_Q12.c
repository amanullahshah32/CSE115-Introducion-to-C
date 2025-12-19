#include <stdio.h>

int main() {
    char A[100], B[50];
    int i = 0, j = 0;


    printf("Enter string A: ");
    gets(A);
    printf("Enter string B: ");
    gets(B);


    while (A[i] != '\0') {
        i++;
    }


    while (B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }

    A[i] = '\0';
    printf("Final string after concatenation: %s", A);

    return 0;
}
