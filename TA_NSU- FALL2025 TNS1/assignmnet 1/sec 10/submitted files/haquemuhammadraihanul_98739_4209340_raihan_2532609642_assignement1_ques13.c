#include <stdio.h>

int main(void)
{
    char str[100];
    int i, j, len = 0, isPal = 1;

    printf("Enter a string: ");
    gets(str);

    // find length
    while (str[len] != '\0')
        len++;

    i = 0;
    j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPal)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
