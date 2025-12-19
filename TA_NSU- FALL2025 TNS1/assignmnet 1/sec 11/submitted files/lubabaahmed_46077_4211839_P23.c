#include <stdio.h>

int main() {
    char input[100], output[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(input, 100, stdin);

    for (i = 0; input[i] != '\0'; i++) {
        char ch = input[i];

        char lowerCh = ch;
        if (ch >= 'A' && ch <= 'Z') {
            lowerCh = ch + 32;
        }


        if (!(lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' ||
              lowerCh == 'o' || lowerCh == 'u')) {
            output[j] = ch;
            j++;
        }
    }
    output[j] = '\0';

    printf("Output string: %s\n", output);

    return 0;
}
