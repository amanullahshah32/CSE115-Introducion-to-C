//03num1
#include <stdio.h>
#include <stdlib.h>




int findlength(char s[]) {
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}

int main() {
    char str[] = "CSE115";
    printf("Length = %d", findlength(str));
    return 0;
}

//03 num b
 int findlength(char *s) {
    int len = 0;
    while(*s != '\0') {
        len++;
        s++;
    }
    return len;
}

int main()
{
    char str[] = "North South";
    printf("Length = %d", findlength(str));
    return 0;
}







