#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("\n enter string:");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
    len = strlen(str);

    int ispalindrome = 1;
    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            ispalindrome = 0;
            break;
        }
    }
    if (ispalindrome == 1)
    {
        printf("\n it's palindrome\n");
    }
    else

        printf("\n it's not palindrome\n");
    return 0;
}