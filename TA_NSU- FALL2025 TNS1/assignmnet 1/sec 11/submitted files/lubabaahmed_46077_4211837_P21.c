#include <stdio.h>

int main() {
    char str[100];
    int words = 0, i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    i = 0;
    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (str[i + 1] == ' ' || str[i + 1] == '\n' ||
                str[i + 1] == '\t' || str[i + 1] == '\0') {
                words++;
            }
        }
        i++;
    }

    printf("Total number of words: %d\n", words);

    return 0;
}
