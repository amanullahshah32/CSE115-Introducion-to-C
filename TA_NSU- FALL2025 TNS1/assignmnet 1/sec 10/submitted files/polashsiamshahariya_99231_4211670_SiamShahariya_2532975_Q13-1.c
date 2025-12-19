#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string:");
    scanf("%[^\n]",str);

    int size=0;
    for(int k=0;str[k]!='\0';k++)
    {
      size++;
    }
   int flag=1;
   for(int i=0,j=size-1;i<j;i++,j--)
   {
       if(str[i]!=str[j])
       {
            flag=0;
            break;
       }
   }
   if(flag==0)
   {
       printf("%s is no palindrome",str);
   }
   else{
    printf("%s is palindrome",str);
   }
}
