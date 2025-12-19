#include <stdio.h>

int main() {
    char str[200], result[200];
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if( (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z') )
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}

