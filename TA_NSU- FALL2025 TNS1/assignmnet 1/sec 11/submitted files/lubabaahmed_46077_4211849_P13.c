#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    i = 0;
    while (str[i] != '\0') {
        length++;
        i++;
    }


    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }


    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is NOT a palindrome.\n", str);
    }

    return 0;
}
