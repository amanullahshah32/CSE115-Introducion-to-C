#include <stdio.h>

int main()
{
    char str[100];
    int i=0,j,isPalindrome=1;

    printf("Enter a string: ");
    gets(str);

    j = 0;
    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

