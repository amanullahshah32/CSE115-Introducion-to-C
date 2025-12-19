#include <stdio.h>

int main() {
    char s[100];
    int i, j, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        length++;
    }

    i = 0;
    j = length - 1;

    while(i < j) {
        if(s[i] != s[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPalindrome == 1)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}
