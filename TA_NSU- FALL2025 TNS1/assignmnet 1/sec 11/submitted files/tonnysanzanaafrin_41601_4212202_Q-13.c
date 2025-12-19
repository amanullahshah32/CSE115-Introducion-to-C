
//Sanzana Afrin Tonny
//2231370042


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int start, end;
    int isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    start = 0;
    end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome == 1) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}
