#include<stdio.h>
int main()
{
   int i, leng=0;
    char c[80];
printf("The string is: ");

    gets(c);

    while(c[leng]!='\0')
    {
        leng++;
    }

    for(i=0;i<leng/2;i++)
        if(c[i]==c[(leng-1)-i])

        printf("Palindrome");

    else
        {printf("Not Palindrome");}

    return 0;
}
