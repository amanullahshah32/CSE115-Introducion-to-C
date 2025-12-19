#include <stdio.h>
#include <string.h>

void Replace(char arr[], char oldChar, char newChar)
{
    int i;
    for(i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
    }
}

int main()
{
    char str[100];
    char oldCh, newCh;

    printf("Enter a string");
    gets(str);

    printf("Enter character to replace");
    scanf(" %c", &oldCh);

    printf("Enter new character ");
    scanf(" %c", &newCh);

    Replace(str, oldCh, newCh);

    printf("Modified string %s\n", str);

    return 0;
}

