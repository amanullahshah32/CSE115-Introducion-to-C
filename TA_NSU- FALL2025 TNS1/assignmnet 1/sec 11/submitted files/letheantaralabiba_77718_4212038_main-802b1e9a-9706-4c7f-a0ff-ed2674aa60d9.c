#include <stdio.h>

int main() {
    char str[200], result[200];
    int j = 0;

    printf("Sample Input String: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            result[j] = c;
            j++;
        }
    }

    result[j] = '\0';

    printf("Expected Output: %s\n", result);

    return 0;
}
