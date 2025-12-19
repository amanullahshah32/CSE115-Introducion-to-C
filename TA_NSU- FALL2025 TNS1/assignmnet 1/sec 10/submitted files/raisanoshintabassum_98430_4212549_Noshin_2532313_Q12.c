#include<stdio.h>
int main()
{
    int i,j;
   char A[100],B[50];
   printf("Enter a sentence for A: ");
   gets(A);
   printf("Enter a sentence for B: ");
   gets(B);
   printf("Final Result=");
   for(i=0;A[i]!='\0';i++);
   {
      for(j=0;B[j]!='\0';j++,i++)
     {
         A[i]=B[j];
     }
     A[i]='\0';
   }

printf("%s",A);
   return 0;
}
