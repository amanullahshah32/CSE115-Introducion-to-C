#include <stdio.h>

void KeepAlphabets(char str[]) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    int k = 0;
    while (str[k] != '\0') {
        if (str[k] == '\n') {
            str[k] = '\0';
            break;
        }
        k++;
    }

    KeepAlphabets(str);

    printf("Modified string: %s\n", str);

    return 0;
}

