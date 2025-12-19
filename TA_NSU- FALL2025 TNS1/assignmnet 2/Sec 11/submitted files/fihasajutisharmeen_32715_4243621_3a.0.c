#include <stdio.h>
#include <stdlib.h>

//3)Implement the following functions which finds the length of a string.
//a) int findlength (char s[])/)

int findlength(char s[])
{
    int i;
    i = 0;

    while(s[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[] = "Hello";
    int len;

    len = findlength(str);

    printf("Length = %d", len);

    return 0;
}


