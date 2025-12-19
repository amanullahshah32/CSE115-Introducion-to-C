//Sanzana Afrin Tonny
//2231370042
//section 11

#include <stdio.h>


int findlength_arr(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}


int findlength_ptr(char *s) {
    int count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
}

int main() {
    char str[] = "Hi,Hello, how are you?";
    printf("Length of Array: %d\n", findlength_arr(str));
    printf("Length using Pointer: %d", findlength_ptr(str));
    return 0;
}
