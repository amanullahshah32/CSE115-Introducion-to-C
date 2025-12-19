#include<stdio.h>
int findlength (char s[])
{   int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[100];
    int n;
    printf("The string:");
    scanf("%[^\n]s",arr);

    int lenth=findlength(arr);
    printf("The length of string=%d",lenth);
    return 0;
}
