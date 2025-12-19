#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%99s", str);


    str[strcspn(str, "\n")] = '\0';
    strcpy(rev, str);


    int len = strlen(rev);
    for (int i = 0; i < len / 2; i++) {
        char temp = rev[i];
        rev[i] = rev[len - i - 1];
        rev[len - i - 1] = temp;
    }

    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
