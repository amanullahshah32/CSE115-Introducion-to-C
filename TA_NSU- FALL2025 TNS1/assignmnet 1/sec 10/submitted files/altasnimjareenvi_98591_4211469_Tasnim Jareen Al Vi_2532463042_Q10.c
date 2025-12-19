#include<stdio.h>
void Replace(char arr[], char oldChar, char newChar)
{
    for(int i=0; arr[i]!='\0' ; i++)
    {
        if(arr[i]==oldChar)
        {
            arr[i]=newChar;
        }
    }
}
int main()
{
    char array[100], oldC, newC;
    printf("Enter a string:");
    gets(array);

    printf("Enter the character to replace:");
    scanf(" %c", &oldC);

    printf("Enter the new character:");
    scanf(" %c", &newC);

    Replace(array, oldC, newC);

    printf("Modified string:%s", array);
    return 0;
}
