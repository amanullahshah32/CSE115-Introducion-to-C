#include <stdio.h>

void checkpalin(char string[])
{
    char copy[50];

    int size = 0;
    while(string[size] != '\0')
    {
        size++;
    }
    for(int i = 0, j = size-1; i < size; i++, j--)
    {
        copy[i] = string[j];
    }

    int ispalin = 1;

    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] != copy[i])
        {
            ispalin = 0;
            break;
        }
    }
    if(ispalin == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
}
int main()
{
    char string[50];

    printf("Enter your string: ");
    gets(string);

    checkpalin(string);
}
