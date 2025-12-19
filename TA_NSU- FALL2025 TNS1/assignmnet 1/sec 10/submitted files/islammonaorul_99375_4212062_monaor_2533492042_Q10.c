#include <stdio.h>
#include <string.h>

void Replace(char arr[], char oldChar, char newChar) {
    for (int i = 0; arr[i]; i++)
        if (arr[i] == oldChar) arr[i] = newChar;
}

int main() {
    char s[200];
    char a, b;

    printf("Enter a line: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    size_t L = strlen(s);
    if (L > 0 && s[L-1] == '\n') s[L-1] = '\0';

    printf("Replace which char? ");
    if (scanf(" %c", &a) != 1) return 0;

    printf("Replace with? ");
    if (scanf(" %c", &b) != 1) return 0;

    Replace(s, a, b);

    printf("Modified string: %s\n", s);
    return 0;
}
