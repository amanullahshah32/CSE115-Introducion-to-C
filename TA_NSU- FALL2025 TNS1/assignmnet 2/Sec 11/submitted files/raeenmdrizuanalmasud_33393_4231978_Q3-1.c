// Md. Rizuan Al Masud Raeen
// 2212398642
// Assignment 02
// Question 03

/* 3. Implement the following functions which finds the length of a string.
a) int findlength (char s[]); b)int findlength (char *s); */

#include <stdio.h>
#include <stdlib.h>

int findlength_array(char s[])
{
    int len = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int findlength_pointer(char *s)
{
    int len = 0;
    while(*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len1 = findlength_array(str);
    int len2 = findlength_pointer(str);

    printf("Length (array version): %d\n", len1);
    printf("Length (pointer version): %d\n", len2);

    return 0;
}
