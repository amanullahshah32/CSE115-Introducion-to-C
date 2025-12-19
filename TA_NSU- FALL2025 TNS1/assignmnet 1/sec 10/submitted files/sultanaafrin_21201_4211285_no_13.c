#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);


    int len = 0;
    while(str[len] != '\0') {
        len++;
    }


    int start = 0;
    int end = len - 1;

    while(start < end) {
        if(str[start] != str[end]) {
            printf("Not a Palindrome\n");
            return 0;
        }
        start++;
        end--;
    }


    printf("It is a Palindrome\n");

    return 0;
}
