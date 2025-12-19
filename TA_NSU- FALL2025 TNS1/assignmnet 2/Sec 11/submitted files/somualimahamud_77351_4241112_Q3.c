#include<stdio.h>
int find_length(char s[])
{
    int i=0;
     while(s[i]!='\0')
     {

        i++;
     }
     return i;

}
int find_length1(char*s)
{
    int i=0;
     while(*(s+i)!='\0')
     {
        i++;
     }
     return i;
}

int main()
{
    char str[100];
    printf("Enter the string :");
    gets(str);
    printf("%s",str);
    find_length(str);
    find_length1(str);
    int length = find_length(str);
    int len = find_length1(str);
    printf("the length of the string(using 1st function) = %d\n",length);
    printf("the length of the string(using 2nd function)= %d",len);

}
