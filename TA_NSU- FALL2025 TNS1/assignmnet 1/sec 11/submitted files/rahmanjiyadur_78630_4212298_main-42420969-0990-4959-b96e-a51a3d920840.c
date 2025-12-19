#include <stdio.h>
#include <stdlib.h>

/*
Write a C program with the function which replaces all occurrence of one character
with another character in a string and displays the modified string in main().
Function prototype: void Replace (char arr[], char oldChar, char newChar); Replace ( )
replaces all occurrences of oldChar with newChar in string pointed to by arr.
*/

 void Replace(char arr[], char oldChar, char newChar) {
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == oldChar){
            arr[i] = newChar;
        }
    }
}

int main() {
    char s[200], oldC, newC;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Character to replace: ");
    scanf("%c", &oldC);
    getchar();

    printf("Replace with: ");
    scanf("%c", &newC);

    Replace(s, oldC, newC);

    printf("Modified string: %s", s);

    return 0;
}
