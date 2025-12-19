#include<stdio.h>
int main()
{
    char A[100],B[50];
    printf("Enter first string: ");
    scanf("%s",A);
    printf("Enter second string: ");
    scanf("%s",B);

    int i=0;
    while(A[i]!='\0')
    {
        i++;
    }

    int j=0;
    while(B[j]!='\0')
    {
        A[i]=B[j];
        j++;
        i++;
    }
    A[i]='\0';
    printf("After joining the string is:%s",A);

    return 0;
}
