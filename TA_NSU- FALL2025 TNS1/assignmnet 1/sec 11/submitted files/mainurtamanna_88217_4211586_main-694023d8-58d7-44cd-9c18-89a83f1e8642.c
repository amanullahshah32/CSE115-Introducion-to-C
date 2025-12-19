#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[200], clean[200];
    int j = 0;

    printf("Enter string: ");
    gets(str);

    for(int i=0; str[i] != '\0'; i++) {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            clean[j++] = str[i];
    }

    clean[j] = '\0';

    printf("Output: %s", clean);


    return 0;
}
