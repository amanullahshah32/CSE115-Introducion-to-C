#include<stdio.h>

int findlength(char *s){
    int count = 0;

    while(*s != '\0'){
        count++;
        s++;
    }

    return count;
}

int main(){
    char str[100];
    int len;

    printf("Enter string: ");
    gets(str);

    len = findlength(str);

    printf("Length = %d", len);

    return 0;
}
