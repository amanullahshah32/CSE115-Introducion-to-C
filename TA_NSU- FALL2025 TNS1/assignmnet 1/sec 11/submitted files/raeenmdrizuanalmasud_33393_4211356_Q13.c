/* 13. Write a C program to check whether a string is palindrome (eg. "DAD", "MADAM") or not
[You may not use any string.h library function to solve the problem] */

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\n' && str[i] != '\0') i++;
    str[i] = '\0';

    j = i - 1;
    i = 0;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

