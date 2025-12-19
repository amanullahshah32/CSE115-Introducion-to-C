
#include <stdio.h>

int main() {
    // A needs to be big enough to hold both!
    char A[100];
    char B[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", A);
    printf("Enter second string: ");
    scanf("%s", B);

    // 1. Find the end of A
    i = 0;
    while(A[i] != '\0') {
        i++;
    }
    // Now 'i' is pointing to the null terminator of A.
    // This is exactly where we want to start pasting B.

    // 2. Append B to A
    j = 0;
    while(B[j] != '\0') {
        A[i] = B[j]; // Copy char from B to the end of A
        i++; // Move A's pointer forward
        j++; // Move B's pointer forward
    }

    // 3. Terminate the new string
    A[i] = '\0';

    printf("After joining, first string is: %s\n", A);

    return 0;
}
