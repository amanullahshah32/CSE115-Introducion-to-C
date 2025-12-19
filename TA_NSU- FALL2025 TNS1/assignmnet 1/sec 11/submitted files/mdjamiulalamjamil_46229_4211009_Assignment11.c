#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    while(str[i] != '\0') {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0'; // Null terminate

    printf("String with only alphabets: %s\n", result);

    return 0;
}
