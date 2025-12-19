#include <stdio.h>

void kOA(char str[])
{
    int i, j = 0;

    for(i = 0; str[i] != '\0'; i++)
    {

        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    gets(str);

    kOA(str);

    printf("Output string: %s\n", str);

    return 0;
}

