#include<stdio.h>
int main()
{
    int i,n;
   char str[100];
   printf("Enter a sentence: ");
   gets(str);
   printf("Final result=");
   for(i=0;str[i]!='\0';i++)
   {
       if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))

      {
          printf("%c",str[i]);

      }
   }

   return 0;
}
