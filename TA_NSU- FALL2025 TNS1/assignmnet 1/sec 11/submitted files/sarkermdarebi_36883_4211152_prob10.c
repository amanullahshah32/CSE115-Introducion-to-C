#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    if (oldChar == '\0' || oldChar == newChar) return;
    for (size_t i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] == oldChar) {
            arr[i] = newChar;
        }
    }
}

int main(void) {
    char s[256];
    char oldChar, newChar;

    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) {
        return 1; // input error
    }

    for (size_t i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    printf("Enter character to replace: ");
    if (scanf(" %c", &oldChar) != 1) return 1;

    printf("Enter replacement character: ");
    if (scanf(" %c", &newChar) != 1) return 1;

    Replace(s, oldChar, newChar);

    printf("Modified string: \"%s\"\n", s);
    return 0;
}
