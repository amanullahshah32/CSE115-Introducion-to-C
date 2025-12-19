#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i=0, j=0;
    while(str[j]!= '\0')
        j++;
    j--;
    int flag= 1;
    while(i<j)
    {
        if(str[i] != str[j])
            flag=0;
        i++;
        j--;
    }

    if(flag)
        printf("Palindrome.");
    else
        printf("not palindrome.");
}
