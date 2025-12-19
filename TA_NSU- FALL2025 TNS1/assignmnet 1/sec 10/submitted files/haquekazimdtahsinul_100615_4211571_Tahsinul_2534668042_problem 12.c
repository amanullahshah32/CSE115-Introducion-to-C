#include <stdio.h>
int main() {
    char A[100], B[50];
    int i = 0, j = 0;
    printf("Enter string A: ");
    fgets(A, sizeof(A), stdin);
    printf("Enter string B: ");
    fgets(B, sizeof(B), stdin);

   while(A[i] != '\0') {
        i++;
    }
    while(B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }
    A[i] = '\0';
    printf("Final concatenated string: %s\n", A);
    return 0;
}
