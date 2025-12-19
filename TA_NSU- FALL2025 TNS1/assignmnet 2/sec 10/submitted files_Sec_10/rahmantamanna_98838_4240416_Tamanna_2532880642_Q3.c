#include<stdio.h>
int findlength_arr (char s[]);
int findlength_ptr (char *s);
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int len1=0,len2=0;
    char *p;
    p=str;
    len1=findlength_arr (str);
    len2=findlength_ptr (p);
    printf("String length(without pointer)=%d\n",len1);
    printf("String length(with pointer)=%d",len2);

    return 0;
}
int findlength_arr (char s[])
{
    int i=0,len=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    return len;
}
int findlength_ptr (char *s)
{
    int i=0,len2=0;
    while(*(s+i)!='\0')
    {
        i++;
        len2++;
    }
    return len2;
}
