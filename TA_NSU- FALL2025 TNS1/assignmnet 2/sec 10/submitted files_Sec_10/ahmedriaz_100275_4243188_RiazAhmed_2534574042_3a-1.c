#include <stdio.h>

int findlength(char s[])
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char st[100];

    printf("Enter a string");
    gets(st);

    int length = findlength(st);
    printf("Length of the string = %d\n", length);

    return 0;
}