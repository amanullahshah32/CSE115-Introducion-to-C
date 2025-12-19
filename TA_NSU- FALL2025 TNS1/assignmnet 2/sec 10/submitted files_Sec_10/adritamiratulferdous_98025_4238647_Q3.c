#include <stdio.h>

int findlength(char s[])
 {
    int leng = 0;
    while(s[leng] != '\0')//no.a
        leng++;

    return leng;
}

int findlength_ptr(char *s)
 {
    int leng = 0;
    while(*(s + leng) != '\0')//no.b
        leng++;

    return leng;
}

int main()
{
    char str[80];

    printf("The string is: ");
    scanf(" %s", str);

    printf("Length with array: %d\n", findlength(str));//a number
    printf("Length with pointer: %d\n", findlength_ptr(str));//b number

    return 0;
}
