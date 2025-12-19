#include <stdio.h>


char toLower(char c) {
    if (c >= 'A' && c <= 'Z') return c + ('a' - 'A');
    return c;
}

int main() {
    char s[200];
    int i, j;

    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    
    for (i = 0; s[i]; i++) {
        if (s[i] == '\n') { s[i] = '\0'; break; }
    }

    
    int len = 0;
    while (s[len]) len++;

    
    i = 0;
    j = len - 1;
    int is_pal = 1; 
    while (i < j) {
        char a = toLower(s[i]);
        char b = toLower(s[j]);
        if (a != b) { is_pal = 0; break; }
        i++; j--;
    }

    if (is_pal) printf("The string is a palindrome\n");
    else printf("The string is not a palindrome\n");

    return 0;
}