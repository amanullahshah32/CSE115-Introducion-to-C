#include <stdio.h>

int main()
{int n;
    char str[n];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);


    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    printf("Output: %s ", str);

    return 0;
}
