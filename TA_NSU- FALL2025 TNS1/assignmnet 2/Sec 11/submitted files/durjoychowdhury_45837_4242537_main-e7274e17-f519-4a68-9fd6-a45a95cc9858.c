// Question 3 (a)

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

    printf("Enter a string: ");
    gets(str);

    printf("Length = %d\n", findlength(str));
    return 0;
}
