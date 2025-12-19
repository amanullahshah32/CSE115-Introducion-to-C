#include <stdio.h>

int findlength(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Length of the string = %d\n", findlength(str));

    return 0;
}
