#include<stdio.h>
int main()
{
    char S[100];
    printf("Write the string here: ");
    gets(S);
    for(int i=0; S[i]!='\0'; i++)
    {
        if(S[i]>='a'&&S[i]<='z'||S[i]>='A'&&S[i]<='Z' )
            printf("%c",S[i]);
    }

    return 0;

}
