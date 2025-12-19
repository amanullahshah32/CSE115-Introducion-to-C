#include <stdio.h>

int findlength(char *s){
    int count = 0;

    while (*s != '\0'){
        count++;
        s++;
    }

    return count;
}

int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length of the string: %d\n", findlength(str));

    return 0;
}
