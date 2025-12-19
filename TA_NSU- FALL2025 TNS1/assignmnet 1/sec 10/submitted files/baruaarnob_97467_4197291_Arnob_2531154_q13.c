#include <stdio.h>

int main() {
    char s[100];
    int i, j;

    printf("Enter a string: ");
    gets(s);

    // find length manually
    for (j = 0; s[j] != '\0'; j++);

    j--; // last character index

    for (i = 0; i < j; i++, j--) {
        if (s[i] != s[j]) {
            printf("Not a palindrome");
            return 0;
        }
    }
