#include <stdio.h>

int findLength(char s[]) {
    int i=0;
    while(s[i] != '\0')
        i++;
    return i;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length = %d\n", findLength(str));
    return 0;
}
