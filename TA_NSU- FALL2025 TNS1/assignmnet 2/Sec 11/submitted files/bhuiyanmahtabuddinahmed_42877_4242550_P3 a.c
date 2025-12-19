//a part
#include <stdio.h>

int lenArr(char s[])
{
    int MA = 0;
    while(s[MA] != '\0')
        MA++;
    return MA;
}

int main()
{
    char text[100];

    printf("Enter a string ");
    fgets(text, sizeof(text), stdin);

    int i = 0;
    while(text[i] != '\0')
    {
        if(text[i] == '\n')
            text[i] = '\0';
        i++;
    }

    printf("Length of string %d\n", lenArr(text));

    return 0;
}

