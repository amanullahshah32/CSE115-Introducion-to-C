#include <stdio.h>
#include <stdlib.h>

//3)Implement the following functions which finds the length of a string.
//b)int findlength (char *s);

int findlength(char *s)
{
    int count;
    count = 0;

    while(*s != '\0')
    {
        count++;
        s++;
    }

    return count;
}

int main()
{
    char str[] = "Hello";
    int len;

    len = findlength(str);

    printf("Length = %d", len);

    return 0;
}
