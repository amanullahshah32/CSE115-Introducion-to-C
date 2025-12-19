#include <stdio.h>
int findlength(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("\n enter size:");
    scanf("%d", &n);
    char s[n];
    printf("\n enter string:");
    gets(s);
    int res = findlength(s);
    printf("Length of the string is: %d\n", res);
    return 0;
}

// using pointer
#include <stdio.h>
int findlength(char *p)
{
    int count = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("\n enter size:");
    scanf("%d", &n);
    char s[n];
    printf("\n enter string:");
    gets(s);
    int res = findlength(s);
    printf("Length of the string is: %d\n", res);
    return 0;
}
