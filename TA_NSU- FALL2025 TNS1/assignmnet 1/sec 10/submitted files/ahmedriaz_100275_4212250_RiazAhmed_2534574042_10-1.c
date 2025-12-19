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
    char s[100];
    char oldch, newch;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter character to replace: ");
    scanf(" %c", &oldch);

    printf("Enter new character: ");
    scanf(" %c", &newch);

    Replace(s, oldch, newch);

    printf("\nModified string = %s", s);

    return 0;
}
