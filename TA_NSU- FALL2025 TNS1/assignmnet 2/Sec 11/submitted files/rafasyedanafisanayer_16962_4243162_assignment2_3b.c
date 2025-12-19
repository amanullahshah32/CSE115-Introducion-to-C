
#include <stdio.h>

int findlength(char *s) {
    int count = 0;

    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %d\n", findlength(str));

    return 0;
}
