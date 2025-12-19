#include <stdio.h>

int lenPtr(char *s)
{
    int MA = 0;
    while(*s != '\0')
    {
        MA++;
        s++;
    }
    return MA;
}

int main()
{
    char text[100];

    printf("Enter a string");
    fgets(text, sizeof(text), stdin);

    int i = 0;
    while(text[i] != '\0')
    {
        if(text[i] == '\n')
            text[i] = '\0';
        i++;
    }

    printf("Length of string  iis %d\n", lenPtr(text));

    return 0;
}

