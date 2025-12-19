#include<stdio.h>

int main()
{
    char str[100];
    int i,j,length=0,ispali=1;

    printf("Enter a string: ");
    scanf("%s",&str);

    while(str[length]!='\0')
    {
        length++;
    }

    i=0;
    j=length-1;
    while(i<j)
    {
        if(str[i]!=str[j])
            {ispali=0;
        break;}
        i++;
        j--;
    }
    if(ispali)
        printf("String is palindrome");
    else
        printf("Not palindrome");
}
