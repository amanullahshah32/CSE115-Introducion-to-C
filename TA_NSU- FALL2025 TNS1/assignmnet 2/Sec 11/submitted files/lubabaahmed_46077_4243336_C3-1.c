#include <stdio.h>
int findlength1(char s[]) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    return length;
}

int findlength2(char *s) {
    int length = 0;

    while (*(s + length) != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);


    printf("Length using array notation: %d\n", findlength1(str));

    printf("Length using pointer notation: %d\n", findlength2(str));

    return 0;
}
