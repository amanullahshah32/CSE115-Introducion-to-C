#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
Write a C program to check whether a string is a palindrome (eg: "DAD", "MADAM") or not. [You may not use an string.h library function to solve the problem.]
*/

    char s[200];
    int len = 0, i, j, isPal = 1;

    printf("Enter a string: ");
    scanf("%s", s);

    while(s[len] != '\0'){
        len++;
    }

    i = 0;
    j = len - 1;

    while(i < j){
        if(s[i] != s[j]){
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if(isPal)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
