#include<stdio.h>

int main()
{
    char str[100];
    int i,j;

    printf("Enter a string: ");
    fgets(str,100,stdin);

    for(i=0,j=0;str[i]!='\0';i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            str[j]=str[i];
            j++;
        }

    }
    str[j]='\0';
    printf("Output string: %s",str);
}
