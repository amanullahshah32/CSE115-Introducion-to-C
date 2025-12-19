#include <stdio.h>

int findlength(char s[]){
    int i = 0;

    while (s[i] != '\0'){
        i++;
    }

    return i;
}

int main(){
    char str[100];

    printf("Enter a string: ");

    fgets(str, sizeof(str), stdin);

    printf("Length of the string: %d\n", findlength(str));

    return 0;
}


