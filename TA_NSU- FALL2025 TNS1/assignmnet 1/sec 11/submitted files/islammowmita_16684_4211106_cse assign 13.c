#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    while(str[len] != '\0') len++;

    j = len - 1;
    while(i < j) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
