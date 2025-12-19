#include <stdio.h>

int findlength(char *s)
{
    int count;

    count = 0;

    while (*s != '\0')
    {
        count++;
        s++;
    }

    return count;
}

int main()
{
    char str[50];

    printf("Enter a string: ");
    gets(str);

    printf("Length = %d\n", findlength(str));

    return 0;
}

