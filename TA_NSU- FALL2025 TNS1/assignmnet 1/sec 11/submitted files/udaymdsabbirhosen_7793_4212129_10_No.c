#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    int i;
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == oldChar) {
            arr[i] = newChar;
        }
    }
}

int main() {
    char str[200];
    char oldChar, newChar;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter new character: ");
    scanf(" %c", &newChar);

    Replace(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}
