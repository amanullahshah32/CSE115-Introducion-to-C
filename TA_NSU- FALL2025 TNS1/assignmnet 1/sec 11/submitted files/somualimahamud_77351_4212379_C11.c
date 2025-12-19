#include <stdio.h>

int main() {
    char str[100], new_str[100];
    int j = 0;

    printf("Enter string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||(str[i] >= 'a' && str[i] <= 'z'))
        {
            new_str[j++] = str[i];
        }
    }

    new_str[j] = '\0';

    printf("Output: %s\n", new_str);
    return 0;
}
