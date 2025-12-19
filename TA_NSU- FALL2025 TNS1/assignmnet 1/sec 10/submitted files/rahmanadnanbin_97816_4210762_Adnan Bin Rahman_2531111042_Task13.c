#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
