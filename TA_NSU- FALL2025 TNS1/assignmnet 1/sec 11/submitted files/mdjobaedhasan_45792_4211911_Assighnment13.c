#include <stdio.h>

int main()
{
    char str[200];
        printf("Enter theo string: ");
    gets(str);

    int len = 0;
    while(str[len] != '\0') len++;

    int start = 0, end = len - 1, flag = 1;

    while(start < end)
        {
        if(str[start] != str[end])
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
