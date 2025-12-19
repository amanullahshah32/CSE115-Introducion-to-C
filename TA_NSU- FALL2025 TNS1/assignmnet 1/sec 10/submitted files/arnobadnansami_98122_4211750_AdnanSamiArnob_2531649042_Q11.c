#include <stdio.h>
#include <string.h>

int main() {
    char s[200], out[200];
    int i, j = 0;

    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) return 0;
    
    int L = strlen(s);
    if (L > 0 && s[L-1] == '\n') s[--L] = '\0';

    for (i = 0; s[i]; i++) {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            out[j++] = c;
        }
    }
    out[j] = '\0';

    printf("%s\n", out);
    return 0;
}