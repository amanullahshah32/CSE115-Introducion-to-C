#include <stdio.h>
int findlength (char *s)//find length using pointers
{
    int count=0;
    for(s;*s!='\0';s++)
        // s starts at the base address of the string
        // *s is the content at that address; loop continues until it's '\0'
        // s++ moves the pointer forward to the next character
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

