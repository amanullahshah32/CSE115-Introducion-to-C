#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[200], result[200];
    int j=0;

    printf("Enter a string: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isalpha(str[i]))
        {
            result[j]=str[i];
            j++;
        }
    }

    result[j]='\0';
    printf("Output: %s", result);
    return 0;
}
