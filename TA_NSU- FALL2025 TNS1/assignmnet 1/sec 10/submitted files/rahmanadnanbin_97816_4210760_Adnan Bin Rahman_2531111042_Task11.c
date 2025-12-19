#include <stdio.h>

void removeNonAlpha(char str[]) {
    int i = 0, j = 0;

    while(str[i] != '\0') {
        if( (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z') ) {

            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeNonAlpha(str);

    printf("Output string: %s", str);

    return 0;
}
