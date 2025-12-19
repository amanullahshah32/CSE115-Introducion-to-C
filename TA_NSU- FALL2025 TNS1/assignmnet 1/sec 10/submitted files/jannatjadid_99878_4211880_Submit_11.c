#include <stdio.h>
int main()
{
    char str[100];
    printf("\n enter a string:");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    printf("\n new string:");

for (int i = 0; str[i] != '\0'; i++)
{
    if ( str[i]>= 'A' && str[i]<='Z' || str[i]>= 'a' && str[i]<='z' )
    {
        printf("%c\n",str[i]);
    }
}
    return 0;
}