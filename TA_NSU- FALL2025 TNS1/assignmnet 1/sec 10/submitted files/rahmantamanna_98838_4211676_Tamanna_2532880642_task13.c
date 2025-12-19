#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i,j=0,len=0;
    printf("Enter a string: ");
    gets(str1);

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    for(i=len-1; i>=0; i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    printf("After reversing: %s\n",str2);

    i=0;

    while(str1[i]==str2[i]&& str1[i]!='\0'&&str2[i]!='\0')
    {
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        printf("The given string is Palindrome");
    }
    else
    {
        printf("The given string is Not Palindrome");
    }
    return 0;
}
