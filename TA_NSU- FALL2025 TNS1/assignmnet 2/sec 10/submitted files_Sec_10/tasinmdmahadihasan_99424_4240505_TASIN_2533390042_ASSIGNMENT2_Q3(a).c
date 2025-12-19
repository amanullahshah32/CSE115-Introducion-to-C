#include<stdio.h>
int findlength(char s[])
{
    int count=0;
    for (int i=0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Length of the string = %d\n", findlength(str));
    return 0;
}

