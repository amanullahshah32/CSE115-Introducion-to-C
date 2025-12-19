#include <stdio.h>
int main()
{
    char A[100];
    char B[50];
    gets(A);
    gets(B);
    printf("After joining, first string is: ");

    int countB=0,countA=0,i,j=0;

    for(i=0;A[i]!='\0';i++)
        countA++;
    for(i=0;B[i]!='\0';i++)
        countB++;

    for(i=countA;i<(countA+countB);i++)
    {
        A[i]=B[j];
        j++;
    }
    A[countA+countB]='\0';
    puts(A);
    return 0;
}
