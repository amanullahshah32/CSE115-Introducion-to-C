#include <stdio.h>

int main()
{
    char str[100];
    int len = 0, isPalindrome = 1, i, j;

    printf("Enter a string ");
    gets(str);


    for (len = 0; str[len] != '\0'; len++);


    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }


    if (isPalindrome)
        printf(" palindrome\n");
    else
        printf(" NOT a palindrom.\n");

    return 0;
}

