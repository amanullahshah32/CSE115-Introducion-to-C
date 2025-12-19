#include <stdio.h>
#include <stdlib.h>

/*
3)Implement the following functions which finds the length of a string.
b)int findlength (char *s);
*/

int findlength(char *s)
{
    int length = 0;

    while(*s != '\0') {
        length++;
        s++;
    }
    return length;
}

int main()
{
    char str[] = "Hello";
    printf("Length = %d\n", findlength(str));
    return 0;
}
