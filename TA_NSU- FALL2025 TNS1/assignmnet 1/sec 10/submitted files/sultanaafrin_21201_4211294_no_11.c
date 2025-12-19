#include <stdio.h>

int main() {
    char str[100];
    printf("Enter String: ");
    gets(str);

    int j = 0;
    for(int i = 0; str[i] != '\0'; i++) {

        if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("Output: %s\n", str);
    return 0;
}
