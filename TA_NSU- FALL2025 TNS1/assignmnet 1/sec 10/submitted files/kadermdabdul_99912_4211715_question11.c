#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    char result[100];
    int j=0;
    printf("Enter a string:");
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        i++;
    }
    i=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a'&& str[i]<='z') ||
            (str[i]>='A'&& str[i]<='Z'))
            {
            result[j]=str[i];
            j++;
        }
        i++;
    }
    result[j]='\0';
    printf("Original string: %s\n",str);
    printf("String with only alphabets: %s\n",result);
    return 0;
}
