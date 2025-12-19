#include <stdio.h>

int main()
{
    char str[50], result[50];
    printf("Enter a string: ");
    gets(str);
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {


            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {

                result[j] = str[i];
                j++;
            }

    }

    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}
