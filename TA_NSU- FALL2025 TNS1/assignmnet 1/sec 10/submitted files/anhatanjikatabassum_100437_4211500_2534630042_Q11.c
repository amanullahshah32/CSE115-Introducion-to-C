#include<stdio.h>
int main()
{
    char str[200],result[200];
    int i,j;
    printf("Enter string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')||str[i]>='a'&&str[i]<='z'));


        {
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';
    printf("output:%s",result);
    return 0;
}
