#include <stdio.h>

int findlength(char s[])
 {
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
 {
    char str[100];
    int length;

    printf("Enter a string: ");
    gets(str);

    length = findlength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}

