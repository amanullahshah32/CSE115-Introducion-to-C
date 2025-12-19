#include<stdio.h>
void Replace (char arr[], char oldChar, char newChar);

int main()
{
    char S[50]="The world is a beautiful place!!!";
    Replace(S,'a','@');
    printf("After replacement: %s",S);
    return 0;

}

void Replace (char arr[], char oldChar, char newChar)
{
    for (int i=0; i<50; i++)
    {
        if(arr[i]== oldChar)
            arr[i]=newChar;
    }
}
