
#include <stdio.h>

// Function Prototype
void Replace(char arr[], char oldChar, char newChar);

int main() {
    char str[100];
    char oldC, newC;

    // 1. Input String
    printf("Enter a string: ");
    // Use scanf for single words.
    scanf("%s", str);

    // 2. Input Characters
    // Notice the space before %c. This is a crucial C trick.
    // It tells scanf to "skip any leftover whitespace/newlines" from the previous input.
    printf("Enter character to replace: ");
    scanf(" %c", &oldC);

    printf("Enter new character: ");
    scanf(" %c", &newC);

    // 3. Call Function
    Replace(str, oldC, newC);

    // 4. Display Result
    printf("Modified String: %s\n", str);

    return 0;
}

// Function Definition
void Replace(char arr[], char oldChar, char newChar) {
    int i = 0;

    // Loop until we hit the null terminator '\0'
    while(arr[i] != '\0') {
        if(arr[i] == oldChar) {
            arr[i] = newChar; // Overwrite
        }
        i++; // Move to next character
    }
}
