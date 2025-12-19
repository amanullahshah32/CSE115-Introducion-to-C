#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        if(arr[i] == oldChar)
            arr[i] = newChar;
        i++;
    }
}

int main()
{
    char str[100], oldC, newC;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf("%c", &oldC);

    printf("Enter new character: ");
    scanf(" %c", &newC);

    Replace(str, oldC, newC);

    printf("Modified string: %s\n", str);

    return 0;
}
