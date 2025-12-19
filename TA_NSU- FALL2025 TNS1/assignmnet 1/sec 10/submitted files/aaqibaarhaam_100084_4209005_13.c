#include<stdio.h>
int main()
{
    char str[100],reversed[100];
    gets (str);
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
        count++;
    reversed[count]='\0';//need to put null character at the end otherwise it will have garbage values
    for(i=0;str[i]!='\0';i++)
    {
        reversed[count-1]=str[i];//count is \0, so (count-1)
        count--;
    }
    int flag=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=reversed[i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("It is a palindrome");
    else
        printf("It is NOT a palindrome");

    return 0;
}
