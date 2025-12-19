#include <stdio.h>

int main() {
    char str[100];
    int length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Manually calculate string length
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome by comparing characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
