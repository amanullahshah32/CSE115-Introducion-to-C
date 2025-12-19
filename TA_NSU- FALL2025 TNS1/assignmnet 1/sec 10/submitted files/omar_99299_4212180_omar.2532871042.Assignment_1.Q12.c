#include<stdio.h>

int main()
{
    char A[100],B[50];
    int i,j;

    printf("Enter first string: ");
    scanf("%s",&A);
    printf("Enter second string: ");
    scanf("%s",&B);

    i=0;
    while(A[i]!='\0')
    {
        i++;
    }
    j=0;
    while(B[j]!='\0')
    {
        A[i]=B[j];
        i++;
        j++;
    }
    A[i]='\0';
    printf("After joining, first string is: %s",A);
}
