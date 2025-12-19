
#include <stdio.h>

int main() {
    char str[100];
    int len = 0, start, end;
    int isPalindrome = 1; // Flag: 1 = True, 0 = False

    printf("Enter a string: ");
    scanf("%s", str);

    // 1. Calculate Length manually
    while(str[len] != '\0') {
        len++;
    }

    // 2. Compare characters from both ends
    start = 0;
    end = len - 1;

    while(start < end) {
        if(str[start] != str[end]) {
            isPalindrome = 0; // Found a mismatch!
            break;            // Stop checking immediately
        }
        start++;
        end--;
    }

    // 3. Output based on flag
    if(isPalindrome == 1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
