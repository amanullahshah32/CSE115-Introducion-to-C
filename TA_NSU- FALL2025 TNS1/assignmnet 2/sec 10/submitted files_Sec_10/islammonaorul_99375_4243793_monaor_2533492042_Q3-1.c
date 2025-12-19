#include <stdio.h>
int findlength_pointer(char *s) {
    char *p = s;
    while (*p) ++p;
    return (int)(p - s);
}
int findlength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}
int main(void) {
    char str[20];
    printf("Enter the string : ");
    gets(str);
    int n;
    printf("Which function to use (1. string 2. pointer) : ");
    scanf("%d", &n);
    if(n == 1){
        printf("Length: %d\n", findlength(str));
    }else{
        printf("Length: %d\n", findlength_pointer(str));
    }
    return 0;
}
