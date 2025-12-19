#include<stdio.h>

int main()
{
    char str[50],rev[50];
    int i, j=0, len = 0, isPalindrome=0;
    printf("Enter a string : ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    for(i=len-1; i>=0; i--)
    {
        rev[j++]=str[i];
    }
    rev[j++]='\0';
    for(i=0; i<len; i++)
    {
        if(str[i]!=rev[i])
        {

            isPalindrome=1;
            break;
        }

    }

    if(isPalindrome==0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");

}
