#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a strig : ");
    gets(str);

    int i=0;
    while(str[i]!='\0')
    {
       i++;
    }
    i=i-1;
    int j=0;
    int check=0;
    while(i>j)
    {
        if(str[j]!=str[i])
        {
            check=1;
            break;
        }
        i--;
        j++;

    }
    if(check==0)
    {
        printf("the string( %s ) is palindrome...",str);
    }
    else
        {

            printf("The string ( %s ) is not pelindrome .!",str);
        }










}
