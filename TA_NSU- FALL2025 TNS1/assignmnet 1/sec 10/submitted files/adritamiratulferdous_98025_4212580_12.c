#include <stdio.h>

int main()
 {
    char A[100], B[50];
    int i, j;
printf("First String:");
    gets(A);

   printf("Second String:");
    gets(B);

    for (i = 0; A[i] != '\0'; i++){

    }

    for (j = 0; B[j] != '\0'; j++)
        A[i + j] = B[j];


    A[i + j] = '\0';

    puts(A);

    return 0;
}
