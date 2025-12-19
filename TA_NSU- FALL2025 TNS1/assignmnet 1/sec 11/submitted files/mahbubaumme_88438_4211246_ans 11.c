#include <stdio.h>

int main()
{
    char str[100],newStr[100];
    int i=0,j=0;

    printf("Enter a string: ");
    gets(str);

    while (str[i]!='\0')
    {
        if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            newStr[j]=str[i];
            j++;
        }
        i++;
    }

    newStr[j] ='\0';
    printf("Modified string: %s", newStr);

    return 0;
}

