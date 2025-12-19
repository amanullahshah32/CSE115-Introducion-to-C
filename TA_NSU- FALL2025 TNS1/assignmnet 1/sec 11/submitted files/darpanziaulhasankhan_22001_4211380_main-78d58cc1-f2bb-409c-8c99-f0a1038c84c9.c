#include <stdio.h>

int main(){
    char A[100], B[50];
    gets(A);
    gets(B);

    int i=0, j=0;
    while(A[i] != '\0') i++;

    while(B[j] != '\0')
        A[i++] = B[j++];

    A[i] = '\0';

    printf("After joining, first string is: %s", A);
}
