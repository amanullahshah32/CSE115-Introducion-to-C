#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    char B[50];
    int i=0,j=0;
    printf("Enter first string:");
    gets(A);

    printf("Enter second string:");
    gets(B);

   for(i=0;A[i]!='\0';i++)
   {

   }

 for(j=0;B[j]!='\0';j++)
{
    A[i]=B[j];
    i++;
}
A[i]='\0';

printf("After joining,first string is:");
puts(A);

return 0;

}
