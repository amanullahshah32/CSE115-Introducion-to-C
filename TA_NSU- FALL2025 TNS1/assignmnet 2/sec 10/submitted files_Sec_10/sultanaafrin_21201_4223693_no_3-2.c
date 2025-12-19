#include <stdio.h>


int findLengthA(char s[]) {  //array
    int count = 0;

    while (s[count] != '\0') {
        count++;
    }
    return count;
}


int findLengthP(char *s) {
    int count = 0;

    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}

int main() {
    char myWord[] = "Hello World";

    printf("Length_Array: %d\n", findLengthA(myWord));   //array
    printf("Length_Pointer: %d\n", findLengthP(myWord)); //pointer
    return 0;
}
