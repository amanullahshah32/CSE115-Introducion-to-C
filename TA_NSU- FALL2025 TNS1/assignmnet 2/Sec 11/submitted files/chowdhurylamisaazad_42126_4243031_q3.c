#include <stdio.h>

// a) Using array notation
int findlength_array(char s[]) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

// b) Using pointer notation
int findlength_pointer(char *s) {
    int count = 0;
    while (*s != '\0') {
        count++;
        s++; // Move pointer to next character
    }
    return count;
}

int main() {
    char str[] = "NorthSouth";
    printf("Length (Array method): %d\n", findlength_array(str));
    printf("Length (Pointer method): %d\n", findlength_pointer(str));
    return 0;
}
