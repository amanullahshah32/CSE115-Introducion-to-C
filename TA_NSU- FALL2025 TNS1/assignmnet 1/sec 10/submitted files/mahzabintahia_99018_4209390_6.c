#include<stdio.h>
#include<string.h>
int main()
{
    char a[200]={0}, str[200];
    int i, j;

    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        a[str[i]]=1;
    }

    printf("Unique elements:");
    for(j=0; j<128; j++)
    {
        if(a[j]==1)
        printf(" %c", j);
    }
}
