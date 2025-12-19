#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char arr[500];
    char result[500];
    int j=0;
    printf("Enter the string:");
    gets(arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(isalpha(arr[i]))
    {
        result[j]=arr[i];
        j++;
    }
    }
 result[j]='\0';

 printf("Output:");
 puts(result);

 return 0;

}