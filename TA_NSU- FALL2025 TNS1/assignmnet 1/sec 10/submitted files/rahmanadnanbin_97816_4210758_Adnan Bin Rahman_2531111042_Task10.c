#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    int i = 0;
    while(arr[i] != '\0') {
        if(arr[i] == oldChar) {
            arr[i] = newChar;
        }
        i++;
    }
}

int main() {
    char str[100];
    char oldC, newC;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to replace: ");
    scanf("%c", &oldC);

    printf("Enter the new character: ");
    getchar();
    scanf("%c", &newC);

    Replace(str, oldC, newC);

    printf("Modified string: %s", str);

    return 0;
}
