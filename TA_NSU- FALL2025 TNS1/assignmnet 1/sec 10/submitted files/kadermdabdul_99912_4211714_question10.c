#include <stdio.h>
void Replace(char arr[],char oldChar,char newChar);
int main()
{
    char str[100];
    char oldChar,newChar;
    printf("Enter a string:");
    fgets(str,100,stdin);
    int i=0;
    while (str[i]!='\0')
    {
        if (str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        i++;
    }
    printf("Enter character to replace:");
    scanf(" %c",&oldChar);
    printf("Enter new character:");
    scanf(" %c",&newChar);
    printf("\nOriginal string: %s\n",str);
    Replace(str,oldChar,newChar);
    printf("Modified string: %s\n",str);

    return 0;
}
void Replace(char arr[],char oldChar,char newChar) {
    int i=0;
    while(arr[i]!='\0')
    {
        if (arr[i]==oldChar)
        {
            arr[i]=newChar;
        }
        i++;
    }
}
