#include <stdio.h>
void Replace (char arr[], char oldChar, char newChar)
{
    for(int i=0;arr[i]!='\0';i++)
        if(arr[i]==oldChar)
            arr[i]=newChar;
    puts(arr);
}
int main()
{
    printf("Enter a string: ");
    char str[100];
    gets (str);//after we press enter, it will stay in buffer

    printf("Enter the character you wish to replace: ");
    char ch;
    scanf(" %c",&ch);//give space to eat the 'enter' in buffer

    printf("Enter the character you wish to replace it with: ");
    char ch2;
    scanf(" %c",&ch2);//space for enter in buffer

    Replace(str,ch,ch2);
    return 0;
}
