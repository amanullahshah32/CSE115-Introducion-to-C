#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);


    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];


        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }

        else if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        }
    }


    printf("Frequencies of letters in the input string:\n");

    int first = 1;
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            if (!first) {
                printf(", ");
            }
            printf("%c/%c: %d", 'a' + i, 'A' + i, freq[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
