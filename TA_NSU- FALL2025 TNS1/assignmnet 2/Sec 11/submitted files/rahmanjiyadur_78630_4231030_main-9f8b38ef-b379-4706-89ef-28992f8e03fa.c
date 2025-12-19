#include <stdio.h>
#include <stdlib.h>

/*
3)Implement the following functions which finds the length of a string.
a) int findlength (char s[]);
*/

int findlength(char s[]) {
    int length = 0;
    while(s[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Hello";
    printf("Length = %d\n", findlength(str));
    return 0;
}
