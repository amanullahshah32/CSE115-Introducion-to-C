#include <stdio.h>

int main() {
    char s[100];
    int k = 0, j;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for (j = 0; s[j] != '\0'; j++) {
        if ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z')) {
            s[k] = s[j];
            k++;
        }
    }

    s[k] = '\0';

    printf("Modified string: %s", s);

    return 0;
}
