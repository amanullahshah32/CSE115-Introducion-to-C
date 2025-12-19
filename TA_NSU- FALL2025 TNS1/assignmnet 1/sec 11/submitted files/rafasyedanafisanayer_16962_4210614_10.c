#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] == oldChar) {
            arr[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldChar, newChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to replace: ");
    scanf("%c", &oldChar);

    printf("Enter new character: ");
    scanf(" %c", &newChar);

    Replace(str, oldChar, newChar);

    printf("Modified string: %s", str);

    return 0;
}
