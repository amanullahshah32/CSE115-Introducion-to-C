#include <stdio.h>

 int main() {
    char s[200], clean[200];
    int j = 0;

    printf("Enter string: ");
    gets(s);

    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z'))
        {
            clean[j++] = s[i];
        }
    }

    clean[j] = '\0';

    printf("Clean string: %s\n", clean);

    return 0;
}

