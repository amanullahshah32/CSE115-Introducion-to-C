#include <stdio.h>
int main() {
    char str[100];
    int i,length=0;
    printf("Enter a string: ");
    scanf("%s",str);
    while (str[length]!='\0') {
        length++;
    }for (i = 0; i < length / 2; i++) {
    if (str[i] == str[length-1-i]){
        }else {
            printf("The string is not a palindrome");
            return 0;}
    }printf("The string is a palindrome");
    return 0;
}
