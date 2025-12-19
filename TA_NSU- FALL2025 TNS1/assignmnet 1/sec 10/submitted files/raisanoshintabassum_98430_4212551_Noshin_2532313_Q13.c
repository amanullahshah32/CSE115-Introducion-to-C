#include <stdio.h>

int main()
{
  char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a sentence: ");
    gets(str);
    for(length=0;str[length]!='\0';length++);
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            flag = 0; // Not a palindrome
            break;
        }
    }
    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
