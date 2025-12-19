#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    // j tracks the position for the next "valid" alphabet
    j = 0;

    for(i = 0; str[i] != '\0'; i++) {
        // Check if character is alphabet
        // (A-Z) OR (a-z)
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j] = str[i]; // Copy the valid char to the "write" position
            j++;             // Advance the "write" position
        }
        // If it's NOT a letter (like '2' or '_'), we simply skip it.
        // i increments, but j stays still.
    }

    // Crucial: Terminate the new string!
    str[j] = '\0';

    printf("Output String: %s\n", str);

    return 0;
}
