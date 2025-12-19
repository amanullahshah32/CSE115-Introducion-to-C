#include <stdio.h>
#include <stdlib.h>


int findlength_array(char s[])  //a
{
    int count = 0;
    while (s[count] != '\0')
        count++;
    return count;
}


int findlength_pointer(char *s)  //b
{
    int count = 0;
    while (*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("a) Length using array = %d\n", findlength_array(str));
    printf("b) Length using pointer = %d\n", findlength_pointer(str));

    return 0;
}









