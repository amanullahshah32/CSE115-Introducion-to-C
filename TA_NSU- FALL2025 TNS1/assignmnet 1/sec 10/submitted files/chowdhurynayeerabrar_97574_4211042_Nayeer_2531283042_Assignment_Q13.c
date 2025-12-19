#include<stdio.h>
int main()
{
    char str[100];
    int j=0,size;
    printf("Enter a string: ");
    gets(str);
    for (j;str[j]!='\0';j++){};
    size=j;
    int isPalindrome=1;
    for (int i=0;i<size/2;i++)
        {
         if (str[i] == str[size-i-1])
            continue;
         else
            isPalindrome=0;
        }
    if (isPalindrome==1)
        printf("The string is palindrome");
    else
        printf("The string is not palindrome");
}

