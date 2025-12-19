#include <stdio.h>

int main() {
    char A[100], B[50];

    printf("Enter first string: ");
    if (!fgets(A, sizeof A, stdin)) return 0;
    
    for (int i = 0; A[i]; i++) {
        if (A[i] == '\n') { A[i] = '\0'; break; }
    }

    printf("Enter second string: ");
    if (!fgets(B, sizeof B, stdin)) return 0;
    for (int i = 0; B[i]; i++) {
        if (B[i] == '\n') { B[i] = '\0'; break; }
    }

   
    int a_len = 0;
    while (A[a_len]) a_len++;

    
    int i = 0;
    while (B[i] && a_len < (int)sizeof(A) - 1) {
        A[a_len++] = B[i++];
    }
    A[a_len] = '\0';

    printf("After joining, first string is: %s\n", A);
    return 0;
}