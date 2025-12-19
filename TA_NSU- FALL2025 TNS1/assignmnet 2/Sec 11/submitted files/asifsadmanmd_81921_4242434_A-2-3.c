#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findlength_array(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

int findlength_pointer(char *s)
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
    printf("Enter a string: ");
    gets(str);

    printf("Length (Array): %d\n", findlength_array(str));
    printf("Length (Pointer): %d\n", findlength_pointer(str));

    return 0;
}
