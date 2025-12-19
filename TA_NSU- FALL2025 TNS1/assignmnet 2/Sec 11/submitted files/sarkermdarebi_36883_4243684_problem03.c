//using array notation
#include <stdio.h>

int findlength(char s[]) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    gets(str);
    printf("%d", findlength(str));
    return 0;
}

//using pointer
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
    gets(str);
    printf("%d", findlength(str));
    return 0;
}
