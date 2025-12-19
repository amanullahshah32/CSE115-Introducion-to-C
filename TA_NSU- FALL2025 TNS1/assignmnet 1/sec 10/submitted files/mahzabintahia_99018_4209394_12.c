#include<stdio.h>
int main()
{
    char A[100], B[50];
    int i=0, j;
    printf("enter a string:");
    gets(A);
    printf("Enter another string: ");
    scanf("%s", B);

    while(A[i] != '\0')
        i++;
    for(j=0; B[j] != '\0'; j++, i++)
    {
        A[i]=B[j];
    }
    A[i]= '\0';
    puts(A);
}
