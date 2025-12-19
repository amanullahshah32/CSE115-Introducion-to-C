/* 10. Write a C program with the function which replaces all occurrence of one character
with another character in a string and displays the modified string in main().
Function prototype: void Replace (char arr[], char oldChar, char newChar); Replace ( )
replaces all occurrences of oldChar with newChar in string pointed to by arr. */

#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        if(arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
        i++;
    }
}

int main()
{
    char arr[100];
    char oldChar, newChar;

    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);

    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    Replace(arr, oldChar, newChar);

    printf("Modified string: %s", arr);

    return 0;
}


