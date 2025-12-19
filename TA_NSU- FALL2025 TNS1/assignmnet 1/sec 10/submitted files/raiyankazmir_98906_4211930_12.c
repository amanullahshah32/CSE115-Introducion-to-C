#include <stdio.h>

int main()
{
    char string1[100];
    char string2[50];

    printf("Enter your first string: ");
    gets(string1);

    printf("Enter your second string: ");
    gets(string2);

    int count = 0;
    for(int i = 0; string1[i] != '\0'; i++)
    {
        count++;
    }

    for(int i = 0; string2[i] != '\0'; i++)
    {
        string1[count] = string2[i];
        count++;
    }
    string1[count] = '\0';

    printf("Your combined string is: %s", string1);
}
