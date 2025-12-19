//Rohan Rajib Chowdhury
//ID 2312932043

//No 3. a)using array notation

#include <stdio.h>

int findlength(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Length of string = %d\n", findlength(str));

    return 0;
}
