#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    for (j = 0; str[j] != '\0'; j++);

    j--;
    i = 0;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            printf("Not Palindrome.\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome.\n");
    return 0;
}

