#include <stdio.h>
int findlength(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
     return i;
}
int main()
{
    char str[] = "Hello World";
    printf("Length of string: %d\n", findlength(str));
    return 0;
}

