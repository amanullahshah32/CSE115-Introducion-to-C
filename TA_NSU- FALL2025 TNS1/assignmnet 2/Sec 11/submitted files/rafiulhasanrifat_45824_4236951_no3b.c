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
    char str[] = "Hello World";
    printf("Length of string: %d\n", findlength(str));
    return 0;
}

