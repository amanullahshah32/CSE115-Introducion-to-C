#include <stdio.h>

int main() {
    char str[200], result[200];
    int j = 0;

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            result[j] = c;
            j++;
        }
    }

    result[j] = '\0';

    printf("Filtered string: %s", result);

    return 0;
}
