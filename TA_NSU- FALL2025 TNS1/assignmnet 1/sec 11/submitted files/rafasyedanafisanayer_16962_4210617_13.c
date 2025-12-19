
#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[length] != '\0') {
        length++;
    }

    i = 0;
    j = length - 1;

    int isPalindrome = 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
