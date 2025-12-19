#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
  Write a C program to remove all characters in a string except the alphabets.
  */


    char s[200], result[200];
    int j = 0;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++){
        if( (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z') )
        {
            result[j] = s[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}
