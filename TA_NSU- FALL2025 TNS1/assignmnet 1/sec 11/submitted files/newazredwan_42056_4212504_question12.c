#include <stdio.h>

int main() {
char A[100], B[50];
int i = 0, j = 0;

printf("Enter first string: ");
fgets(A, sizeof(A), stdin);

printf("Enter second string: ");
fgets(B, sizeof(B), stdin);

while (A[i] != '\0' && A[i] != '\n')
i++;

while (B[j] != '\0' && B[j] != '\n')
A[i++] = B[j++];

A[i] = '\0';

printf("After joining: %s", A);

return 0;
}