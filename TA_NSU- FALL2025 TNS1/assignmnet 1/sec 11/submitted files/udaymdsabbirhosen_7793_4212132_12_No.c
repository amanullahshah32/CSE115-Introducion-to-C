#include <stdio.h>

int main() {
    char A[100], B[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
     scanf("%99s", A);
    printf("Enter second string: ");
     scanf("%99s", B);


    while (A[i] != '\0') {
        i++;
    }


    while (B[j] != '\0') {
        A[i] = B[j];
        i++;
        j++;
    }
    A[i] = '\0';
    printf("After joining, first string is: %s\n", A);

    return 0;
}
