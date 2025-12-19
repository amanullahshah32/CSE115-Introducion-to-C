#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    for(int i=0; arr[i] != '\0'; i++)
        if(arr[i] == oldChar)
            arr[i] = newChar;
}

int main() {
    char str[100], oldChar, newChar;

    printf("Enter string: ");
    gets(str);

    printf("Replace which character? ");
    scanf("%c", &oldChar);
    getchar();

    printf("Replace with: ");
    scanf("%c", &newChar);

    Replace(str, oldChar, newChar);

    printf("Modified string: %s", str);


    return 0;
}
