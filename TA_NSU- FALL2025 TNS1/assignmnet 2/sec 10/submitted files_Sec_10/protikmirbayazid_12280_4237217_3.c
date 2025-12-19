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


int findlength_ptr(char *s)
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

    printf("Length using array notation = %d\n", findlength(str));
    printf("Length using pointer notation = %d\n", findlength_ptr(str));

    return 0;
}
