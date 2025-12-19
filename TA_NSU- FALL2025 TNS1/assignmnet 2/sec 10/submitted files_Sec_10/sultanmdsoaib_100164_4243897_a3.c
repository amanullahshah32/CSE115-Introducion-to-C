#include <stdio.h>

int findlength(char s[])
{
    int i;

    i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    gets(str);

    printf("Length = %d\n", findlength(str));

    return 0;
}
