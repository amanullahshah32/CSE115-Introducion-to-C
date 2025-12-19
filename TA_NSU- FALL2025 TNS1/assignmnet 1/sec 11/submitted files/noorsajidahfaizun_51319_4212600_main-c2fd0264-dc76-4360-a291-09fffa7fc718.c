#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char str[100], result[100];
    int i = 0, j = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0')
    {
        if (str[len] == '\n')
        {
            str[len] = '\0';
            break;
        }
        len++;
    }


    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';
    printf("Modified string: %s\n", result);
    return 0;
}
