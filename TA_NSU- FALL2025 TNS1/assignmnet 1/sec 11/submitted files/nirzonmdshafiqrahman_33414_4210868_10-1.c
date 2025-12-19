#include <stdio.h>


void Replace(char arr[], char oldChar, char newChar) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == oldChar) {
            arr[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldC, newC;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    printf("Enter the character to replace: ");
    scanf("%c", &oldC);

    printf("Enter the new character: ");
    scanf(" %c", &newC);  


    Replace(str, oldC, newC);

    printf("Modified string: %s", str);

    return 0;
}
