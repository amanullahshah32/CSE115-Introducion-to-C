#include<stdio.h>


void Replace(char arr[],char oldChar,char newChar);

int main()
{
    char str[100];
    char Oldc,Newc;

    printf("Enter a string: ");
    fgets(str,100,stdin);

    printf("Enter the character to replace: ");
    scanf("%c",&Oldc);
    getchar();

    printf("Enter the new character: ");
    scanf("%c",&Newc);

    Replace(str,Oldc,Newc);
    printf("Modified string: %s",str);



}

void Replace(char arr[],char oldChar,char newChar)
{
    int i;

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==oldChar)
        {
            arr[i]=newChar;
        }
    }
}
