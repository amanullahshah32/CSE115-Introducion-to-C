#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Output string: %s\n", str);
}
