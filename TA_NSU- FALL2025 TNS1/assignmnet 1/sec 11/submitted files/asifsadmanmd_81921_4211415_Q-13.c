#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    printf("Enter the string: ");
    gets(arr);

    int size = 0;
    while(arr[size] != '\0')
    {
        size++;
    }

    int isPalindrome = 1;

    for(int i = 0; i < size / 2; i++)
    {
        if(arr[i] != arr[size - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
