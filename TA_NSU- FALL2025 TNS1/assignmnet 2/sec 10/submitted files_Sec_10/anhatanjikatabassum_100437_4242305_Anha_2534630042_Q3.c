#include <stdio.h>
#define size 100

int findinglength_array(char s[]);
int findinglength_pointer(char *s);

int main()
{
    int i,k=0,l=0;
    char str[size];
    printf("Enter a sentence:");
    gets(str);

    k=findlength_arr(str);
    l=findlength_ptr(str);


    printf("String's length (array):%d",k);
    printf("\nString's length (pointer):%d",l);

    return 0;
}

int findinglength_array(char s[])
{
    int i, count = 0;
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int findinglength_pointer(char *s)
{
    int count2 = 0;
    while (*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}
