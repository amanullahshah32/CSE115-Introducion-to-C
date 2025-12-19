#include <stdio.h>

    //(a) Version using char s[]

int findlength(char s[]) {
    int len = 0;
    while(s[len] != '\0')
        len++;
    return len;
}

    //(b) Version using char *s
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

    // Calling (a)
    printf("Length using function (a) char s[] = %d\n", findlength(str));

    // Calling (b)
    printf("Length using function (b) char *s = %d\n", findlength_ptr(str));

    return 0;
}
