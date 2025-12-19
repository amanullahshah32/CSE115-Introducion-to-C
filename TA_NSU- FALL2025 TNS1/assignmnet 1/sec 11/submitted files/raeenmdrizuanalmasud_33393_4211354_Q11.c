/* 11. Write a C program to remove all characters in a string except the alphabets.
Sample Input String: corona2_update1ne$ws.co3m
Expected Output: coronaupdatenewscom */

#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("Modified string: %s\n", result);

    return 0;
}
