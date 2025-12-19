#include <stdio.h>
void Replace(char arr[], char oldChar, char newChar) {
    int i = 0;

    while (arr[i] != '\0') {
        if (arr[i] == oldChar) {
            arr[i] = newChar;
        }
        i++;
    }
}

int main() {
    char str[100];
    char oldCh, newCh;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to replace: ");
    scanf("%c", &oldCh);

    printf("Enter new character: ");
    scanf(" %c", &newCh);
    Replace(str, oldCh, newCh);

    printf("Modified string: %s\n", str);

    return 0;
}

