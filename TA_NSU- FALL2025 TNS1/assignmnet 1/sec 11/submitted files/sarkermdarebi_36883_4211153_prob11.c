#include <stdio.h>
#include <ctype.h>
#include <string.h>

void keep_only_alphabets(char *s) {
    size_t i = 0, j = 0;
    for (; s[i] != '\0'; ++i) {
        if (isalpha((unsigned char)s[i])) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(void) {
    // Example: read a line from stdin
    char buf[1024];


    if (fgets(buf, sizeof buf, stdin) == NULL) {
        return 0;
    }
    // Remove trailing newline if present
    size_t n = strlen(buf);
    if (n > 0 && buf[n - 1] == '\n') buf[n - 1] = '\0';

    keep_only_alphabets(buf);
    printf("%s\n", buf);
    return 0;
}
