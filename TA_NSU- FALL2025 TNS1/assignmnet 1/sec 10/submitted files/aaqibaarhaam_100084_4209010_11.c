#include <stdio.h>
int main()
{
    printf("Enter a string: ");
    char str[100];
    gets (str);
    char str2[100]={0};
    int j=0,i;
    for(i=0;str[i]!='\0';i++)
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z'))
            {
                str2[j]=str[i];
                j++;
            }
    puts(str2);
}
