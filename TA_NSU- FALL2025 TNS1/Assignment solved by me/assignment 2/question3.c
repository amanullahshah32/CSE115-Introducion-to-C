
#include <stdio.h>

// Function Prototypes
int findlength_Array(char s[]);
int findlength_Pointer(char *s);

int main() {
    // Test string
    char myString[100];

    printf("Enter a string: ");
    scanf("%s", myString); // Note: scanf stops at space. Use gets/fgets for sentences.

    // Call Function A (Array Notation)
    int len1 = findlength_Array(myString);
    printf("Length using Array Notation: %d\n", len1);

    // Call Function B (Pointer Notation)
    // Passing 'myString' works because array name = pointer to first element
    int len2 = findlength_Pointer(myString);
    printf("Length using Pointer Notation: %d\n", len2);

    return 0;
}

// Part A: Array Notation Logic
int findlength_Array(char s[]) {
    int i = 0;

    // Check every index starting from 0
    while (s[i] != '\0') {
        i++; // Move to next index
    }

    // When loop breaks, i is exactly at the null terminator
    // which effectively equals the length.
    return i;
}

// Part B: Pointer Notation Logic
int findlength_Pointer(char *s) {
    int count = 0;

    // *s gets the character at the current address
    while (*s != '\0') {
        count++; // Count this character
        s++;     // MOVE the pointer to the next memory address
    }

    return count;
}
