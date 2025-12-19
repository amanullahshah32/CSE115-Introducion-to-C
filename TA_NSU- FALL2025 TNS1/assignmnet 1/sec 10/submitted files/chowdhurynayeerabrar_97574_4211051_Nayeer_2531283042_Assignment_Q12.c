#include <stdio.h>

int main() {
    char A[100], B[50];
    int i=0,j=0;
    printf("Enter first string: ");
    gets(A);
    printf("Enter second string: ");
    gets(B);
    for(i;A[i]!='\0';i++){};
    for(j;B[j]!='\0';j++)
    {
        A[i]=B[j];
        i++;
    }
    A[i] = '\0';
    printf("After joining, first string is: %s", A);
}
