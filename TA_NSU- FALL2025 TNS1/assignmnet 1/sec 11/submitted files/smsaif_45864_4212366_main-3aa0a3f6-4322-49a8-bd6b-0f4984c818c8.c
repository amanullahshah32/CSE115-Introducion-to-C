#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200], result[200];
    printf("Enter string: ");
    scanf("%s", str);

    int j=0;
    for(int i=0; str[i]!='\0'; i++) {
        if(isalpha(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Filtered string: %s\n", result);
    return 0;
}

