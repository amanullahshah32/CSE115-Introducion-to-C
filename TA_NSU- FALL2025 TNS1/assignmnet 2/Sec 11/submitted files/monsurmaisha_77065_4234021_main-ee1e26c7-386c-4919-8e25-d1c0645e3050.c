//answer 3
#include <stdio.h>
#include <stdlib.h>

// (a) findinglength using char s[]
int findlength(char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

// (b) findinglength using char *s
int findlength_ptr(char *s) {
    int len = 0;
    while(*s != '\0') {
        len++;
        s++;
    }
    return len;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Length using char s[]: %d\n", findlength(str));
    printf("Length using char *s: %d\n", findlength_ptr(str));

    return 0;
}
