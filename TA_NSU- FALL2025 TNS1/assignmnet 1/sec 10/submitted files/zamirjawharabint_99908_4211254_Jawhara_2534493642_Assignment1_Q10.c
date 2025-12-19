#include<stdio.h>
void Replace(char arr[], char oldChar, char newChar)
{
    int i;
    for(i=0; arr[i]!= '\0'; i++)
    {
        if(arr[i] == oldChar)
            arr[i]= newChar;
    }
}

int main()
{
    char arr[100];
    printf("enter a string: ");
    gets(arr);
    char o, n;
    printf("enter old character and new character: ");
    scanf(" %c %c", &o, &n);
    Replace(arr,o,n);
    puts(arr);
    return 0;
}
