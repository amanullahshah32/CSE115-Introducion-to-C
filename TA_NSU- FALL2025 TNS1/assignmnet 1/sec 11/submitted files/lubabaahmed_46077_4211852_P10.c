#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar);

int main() {
    char str[100];
    char oldChar, newChar;

    printf("Enter a string: ");
    fgets(str, 100, stdin);


    int len = 0;
    while (str[len] != '\0') len++;
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }


    printf("Enter character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter new character: ");
    scanf(" %c", &newChar);


    printf("\nOriginal string: %s\n", str);
    Replace(str, oldChar, newChar);
    printf("Modified string: %s\n", str);

    return 0;
}


void Replace(char arr[], char oldChar, char newChar) {
    int i = 0;
    while (arr[i] != '\0') {
        if (arr[i] == oldChar) {
            arr[i] = newChar;
        }
        i++;
    }
}
