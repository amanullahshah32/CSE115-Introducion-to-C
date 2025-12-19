#include<stdio.h>
#include<string.h>
int findlength(char s[])
{
    int i=0;
    while(s[i] != '\0')
        i++;
    return i;
}
int findlengthPtr(char *s)
{
    int len=0;
    while(*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

int main()
{
    char str[50];
    printf("enter string: ");
    gets(str);

    printf("length by array: %d\n", findlength(str));
    printf("length by pointer: %d\n", findlengthPtr(str));

}
