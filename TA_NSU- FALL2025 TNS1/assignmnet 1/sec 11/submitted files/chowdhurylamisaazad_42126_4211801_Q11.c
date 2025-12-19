#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    char result[200];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';
    printf("String with alphabets only: %s\n", result);

    return 0;
}

