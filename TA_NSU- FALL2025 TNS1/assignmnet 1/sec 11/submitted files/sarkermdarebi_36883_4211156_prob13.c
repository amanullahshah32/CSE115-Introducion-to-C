#include <stdio.h>

int main(void) {
    char s[1000];
    int len = 0;
    int i, j;
    int is_pal = 1;

    /* Read a line (including spaces). */
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0; /* No input */
    }

    /* Compute length manually and strip trailing newline if present. */
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    /* Two-pointer palindrome check. */
    i = 0;
    j = len - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            is_pal = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_pal) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
