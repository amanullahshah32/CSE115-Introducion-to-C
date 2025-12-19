#include <stdio.h>

void Replace(char arr[], char oldChar, char newChar) {
    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] == oldChar) {
            arr[i] = newChar;
        }
    }
}

int main() {
    char str[100] = "banana";
    printf("Original: %s\n", str);

    Replace(str, 'a', '0');

    printf("Modified: %s\n", str);
    return 0;
}
