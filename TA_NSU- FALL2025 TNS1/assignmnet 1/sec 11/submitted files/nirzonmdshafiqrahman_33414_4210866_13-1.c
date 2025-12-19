#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);   

    while (str[len] != '\0') {
        len++;
    }
    j = len - 1;
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");

    return 0;
}
