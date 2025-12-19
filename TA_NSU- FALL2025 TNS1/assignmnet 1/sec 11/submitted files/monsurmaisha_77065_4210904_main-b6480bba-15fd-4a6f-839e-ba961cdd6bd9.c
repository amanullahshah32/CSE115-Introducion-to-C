#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    gets(str);


    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }


    i = 0;
    j = length - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not a palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;


    return 0;
}
