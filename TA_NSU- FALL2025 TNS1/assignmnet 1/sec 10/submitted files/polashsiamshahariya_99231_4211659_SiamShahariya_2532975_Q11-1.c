#include <stdio.h>
int main() {
    char str[200], result[200];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {

            result[j] = str[i];
            j++;
    }
    }
    result[j] = '\0';

    printf("String with only alphabets: %s\n", result);

    return 0;
}
