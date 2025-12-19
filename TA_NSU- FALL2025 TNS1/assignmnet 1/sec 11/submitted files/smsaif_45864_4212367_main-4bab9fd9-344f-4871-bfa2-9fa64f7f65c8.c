#include <stdio.h>

int main() {
    char A[100], B[50];
    printf("Enter first string: ");
    scanf("%s", A);
    printf("Enter second string: ");
    scanf("%s", B);

    int i=0;
    while(A[i]!='\0') i++; // find end of A

    for(int j=0; B[j]!='\0'; j++) {
        A[i++] = B[j];
    }
    A[i] = '\0';

    printf("After joining: %s\n", A);
    return 0;
}

