#include <stdio.h>

int main(void)
{
    char str[200], newStr[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            newStr[j++] = ch;
        }
    }
    newStr[j] = '\0';

    printf("After removing non-alphabets: %s\n", newStr);

    return 0;
}
