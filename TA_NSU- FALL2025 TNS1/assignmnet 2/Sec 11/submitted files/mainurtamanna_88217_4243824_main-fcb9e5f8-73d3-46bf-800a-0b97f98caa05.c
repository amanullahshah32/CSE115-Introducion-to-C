#include <stdio.h>
#include <stdlib.h>

// Version a: Using array notation
int findlength_a(char s[]){
    int length=0;
    while(s[length]!='\0'){
        length++;
    }
    return length;
}

// Version b: Using pointer notation
int findlength_b(char*s){
    int length=0;
    while(*(s+length)!='\0'){
        length++;
    }
    return length;
}

int main() {
    char str[]="Hello World";

    printf("String: %s\n", str);
    printf("Length (array method): %d\n", findlength_a(str));
    printf("Length (pointer method): %d\n", findlength_b(str));

    return 0;
}
