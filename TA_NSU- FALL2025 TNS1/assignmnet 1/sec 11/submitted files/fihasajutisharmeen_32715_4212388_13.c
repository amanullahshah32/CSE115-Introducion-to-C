#include <stdio.h>
#include <stdlib.h>

//13) Write a C program to check whether a string is palindrome or not [You may not use any string.h library function to solve the problem]

int main()
{
    char str[100];
    int i=0, j=0;
    int isPal = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[j] != '\0' && str[j] != '\n')
    {
        j++;
    }
    j = j - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPal == 1)
    {
        printf("The string is a palindrome");
    }
    else
    {
       printf("The string is NOT a palindrome");
    }

return 0;
}
