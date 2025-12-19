#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100];
    char result[100];
    int j = 0;

    printf("Enter string: ");
    gets(arr);

    for(int i = 0; arr[i] != '\0'; i++)
    {
        char c = arr[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            result[j] = c;
            j++;
        }
    }
    result[j] = '\0';

    printf("Filtered string: %s", result);

    return 0;
}
