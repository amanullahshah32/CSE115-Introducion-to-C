// Property of Imtiaz 2512169

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j=0;
    char str[50];
    printf("Enter the string (no spaces): ");
    scanf("%s", str);
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isalpha(str[i]))
        {
            str[j]=str[i];
            j++;
        }
    }
    
    str[j] =  '\0';
    printf("The new string is %s", str);
    
    return 0;
}

// Property of Imtiaz 2512169
