#include <stdio.h>

int main()
{
    char strold[100], strnew[100];
    int j = 0;
    printf("Enter string: ");
    gets(strold);
    for(int i=0; strold[i] != '\0'; i++)
    {
        if((strold[i] >= 'A' && strold[i] <= 'Z') || (strold[i] >= 'a' && strold[i] <= 'z'))
        {
            strnew[j] = strold[i];
            j++;
        }
    }
    strnew[j]='\0';
    printf("Output: %s", strnew);
}
