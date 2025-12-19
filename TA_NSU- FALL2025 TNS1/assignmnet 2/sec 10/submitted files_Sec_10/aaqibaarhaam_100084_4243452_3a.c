#include <stdio.h>
int findlength (char s[])
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)
        count++;
    return count;
}
int main()
{
    char str[100];
    gets(str);
    int n=findlength(str);
    printf("\n\nLength of the string is %d characters.\n\n",n);
    return 0;
}
