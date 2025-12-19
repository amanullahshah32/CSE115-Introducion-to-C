#include <stdio.h>
#include <stdlib.h>

void Replace(char arr[], char oldChar, char newChar);

int main()
{
     char str[100];
    char oldChar, newChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0') {
        if (str[len] == '\n') {
            str[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter the character to replace: ");
    scanf("%c", &oldChar);
    getchar();
    printf("Enter the new character: ");
    scanf("%c", &newChar);

    Replace(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}
void Replace(char arr[], char oldChar, char newChar)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
        i++;
    }
}
