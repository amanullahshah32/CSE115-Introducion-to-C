#include <stdio.h>

int main() {
    char A[100], B[50];
    int i, j;

    // Input string A
    printf("Enter first string (A): ");
    fgets(A, sizeof(A), stdin);

    // Remove newline from fgets for A, if present
    for (i = 0; A[i] != '\0'; i++) {
        if (A[i] == '\n') {
            A[i] = '\0';
            break;
        }
    }

    // Input string B
    printf("Enter second string (B): ");
    fgets(B, sizeof(B), stdin);

    // Remove newline from fgets for B, if present
    for (i = 0; B[i] != '\0'; i++) {
        if (B[i] == '\n') {
            B[i] = '\0';
            break;
        }
    }

    // Find the end of string A
    for (i = 0; A[i] != '\0'; i++);

    // Concatenate B at the end of A
    for (j = 0; B[j] != '\0'; j++, i++) {
        A[i] = B[j];
    }

    A[i] = '\0';  // Null-terminate the final string

    // Print the concatenated string
    printf("Concatenated string: %s\n", A);

    return 0;
}
