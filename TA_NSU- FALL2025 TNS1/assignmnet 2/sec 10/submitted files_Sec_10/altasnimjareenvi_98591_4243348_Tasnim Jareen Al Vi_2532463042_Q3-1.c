#include<stdio.h>
#define size 100
int  findlength_arr(char s[])
{
    char *p = s;
    int count=0;
    while(*p)
    {
        count++;
        p++;
    }
    return count;
}
int findlength_ptr(char *s)
{
 int count2=0;
    while(*s!='\0')
    {
        count2++;
        s++;
    }
    return count2;
}

int main()
{
    int array,ptr;
    char str[size];
    printf("Enter a sentence:");
    gets(str);
    array=findlength_arr(str);
    ptr=findlength_ptr(str);
    printf("String's length(array):%d",array);
    printf("\nString's length(pointer):%d",ptr);
    return 0;
}