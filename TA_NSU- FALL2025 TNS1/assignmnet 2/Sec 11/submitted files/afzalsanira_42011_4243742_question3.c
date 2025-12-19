#include <stdio.h>

// Implementation a) Using Array Indexing syntax
int findlength_ver_a(char s[]) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

// Implementation b) Using Pointer syntax
int findlength_ver_b(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++; // Move the pointer forward
    }
    return length;
}

int main() {
    char myString[] = "Hello World";

    printf("Length using array logic: %d\n", findlength_ver_a(myString));
    printf("Length using pointer logic: %d\n", findlength_ver_b(myString));

    return 0;
}
