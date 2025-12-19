#include <stdio.h>

int main()
{
    char str[200], clean[200];
    int i = 0, j = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z'))
        {
            clean[j] = str[i];
            j++;
        }
        i++;
    }

    clean[j] = '\0';

    printf("Output string: %s\n", clean);

    return 0;
}
