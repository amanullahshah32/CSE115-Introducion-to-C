#include <stdio.h>

int findlength(char *s)
{
    int count = 0;
    while(*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}

int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    gets(str);

    length = findlength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}

