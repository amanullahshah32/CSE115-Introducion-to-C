#include <stdio.h>
void replace(char str[], char old, char new)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == old)
        {
            str[i] = new;
        }
    }
}

int main()
{
    char str[100];
    char old, new;
    printf("\n enter a string:");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    printf("\n enter a character to replace:");
    scanf(" %c", &old);
    printf("\n enter new character:");
    scanf(" %c", &new);
    replace(str, old, new);
    printf("\n after modifying: %s\n", str);

    return 0;
}