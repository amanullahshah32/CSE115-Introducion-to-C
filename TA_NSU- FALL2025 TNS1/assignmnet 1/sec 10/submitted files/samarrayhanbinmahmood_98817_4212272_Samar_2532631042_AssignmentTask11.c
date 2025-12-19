#include <stdio.h>

int main()
{
    char str[200], result[200];
    int j = 0;

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
    {

        if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
            result[j++] = str[i];
    }


result[j] = '\0';

      printf("Output: %s\n", result);

    return 0;
}
