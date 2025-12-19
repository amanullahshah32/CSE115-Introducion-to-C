#include <stdio.h>
#include <stdlib.h>

//10) Write a C program with the function which replaces all occurrence of one character with another character in a string and displays the modified string in main(). Function prototype: void Replace (char arr[], char oldChar, char newChar); Replace ( ) replaces all occurrences of oldChar with newChar in string pointed to by arr

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

int main()
{
    char str[100];
    char oldC;
    char newC;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter character to replace: ");
    scanf("%c",&oldC);
    printf("Enter new character: ");
    scanf(" %c",&newC);
    Replace(str,oldC,newC);
    printf("Modified string: %s",str);
return 0;
}
