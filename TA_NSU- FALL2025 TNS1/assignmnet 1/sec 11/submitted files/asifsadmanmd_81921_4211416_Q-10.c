#include <stdio.h>
#include <stdlib.h>

void Replace(char arr[], char oldChar, char newChar)
{
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
    }
}

int main()
{
    char arr[100];
    char oldC, newC;

    printf("Enter string: ");
    gets(arr);

    printf("Enter character to replace: ");
    scanf("%c", &oldC);

    getchar();

    printf("Enter a new character: ");
    scanf("%c", &newC);

    Replace(arr, oldC, newC);

    printf("Modified string: %s", arr);

    return 0;
}
