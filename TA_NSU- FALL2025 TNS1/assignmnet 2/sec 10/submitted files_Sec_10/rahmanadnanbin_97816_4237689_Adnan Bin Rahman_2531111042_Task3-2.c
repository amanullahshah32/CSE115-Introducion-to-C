#include <stdio.h>
int findlength_array(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}
int findlength_pointer(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Length (array version) = %d\n", findlength_array(str));
    printf("Length (pointer version) = %d\n", findlength_pointer(str));
    return 0;
}
