#include <stdio.h>

void Replace(char arr[], char oldchar, char newchar) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == oldchar) {
            arr[i] = newchar;
        }
    }
}

int main() {
    char str[100], oldc, newc;

    printf("Enter string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf("%c", &oldc);

    printf("Enter new character: ");
    scanf(" %c", &newc);

    Replace(str, oldc, newc);

    printf("Modified string: %s\n", str);
    return 0;
}
