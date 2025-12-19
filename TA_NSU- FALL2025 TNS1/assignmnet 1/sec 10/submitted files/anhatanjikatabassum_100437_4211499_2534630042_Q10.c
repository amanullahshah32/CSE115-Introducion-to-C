#include<stdio.h>
void Replace(char arr[],char oldchar,char newchar)
{
    int i;
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==oldchar)
        {
            arr[i]=newchar;
        }
    }
}
int main()
{
    char str[200];
    char oldC,newC;
    printf("Enter a string:");
    gets(str);
    printf("Enter the character you want to replace:");
    scanf("%c",&oldC);
    getchar();
    printf("Enter the new character: ");
    scanf("%c",&newC);
    Replace(str,oldC,newC);
    printf("Modified string:%s\n",str);
    return 0;
}
