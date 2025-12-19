#include<stdio.h>

int findlengthArr(char s[])
{
    int i=0;
    while (s[i]!='\0')
        i++;
    return i;
}

int findlengthPtr(char *s)
{
    int count=0;
    while (*s!='\0')
    {
        count++;
        s++;
    }
    return count;
}

int main()
{
    char str[]={'\0'};
    printf("Enter string: ");
    gets(str);
    printf("Size is %d",findlengthArr(str));
    printf("Size is %d",findlengthPtr(str));
}
