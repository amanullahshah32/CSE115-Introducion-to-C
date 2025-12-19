#include<stdio.h>
int findlength(char *s)
{
    int count=0;
    while (*s!='\0') {
        count++;
        s++;
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
}

