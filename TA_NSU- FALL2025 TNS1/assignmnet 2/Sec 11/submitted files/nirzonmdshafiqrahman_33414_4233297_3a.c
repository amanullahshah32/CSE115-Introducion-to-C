#include <stdio.h>
int findlength(char s[]) {
    int len = 0;
    while (s[len] != '\0') { 
        len++;
    }
    return len;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    int length = findlength(str);
    printf("Length of the string = %d\n", length);
    return 0;
}
