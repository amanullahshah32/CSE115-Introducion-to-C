#include <stdio.h>

/* Function using array notation */
int findlength_array(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

/* Function using pointer notation */
int findlength_pointer(char *s)
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
    gets(str);   // For exam purpose only (unsafe in practice)

    printf("Length using array notation: %d\n", findlength_array(str));
    printf("Length using pointer notation: %d\n", findlength_pointer(str));

    return 0;
}
