#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;


    printf("Sample Input String: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';


    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("Expected Output: %s\n", result);

    return 0;
}
