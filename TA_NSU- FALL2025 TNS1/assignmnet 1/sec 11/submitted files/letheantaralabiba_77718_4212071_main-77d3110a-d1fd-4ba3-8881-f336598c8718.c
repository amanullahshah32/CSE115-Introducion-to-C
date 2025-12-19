#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j;

    printf("Enter a string: ");
    gets(str);

    j = strlen(str) - 1;

    int isPalindrome = 1; // assume true

    while(i < j) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
