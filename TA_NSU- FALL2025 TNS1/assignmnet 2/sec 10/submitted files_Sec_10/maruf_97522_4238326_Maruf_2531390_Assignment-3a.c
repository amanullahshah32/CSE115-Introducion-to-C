#include<stdio.h>
int findlength (char s[])
{
    int count=0;
    int i;
    for(i=0; s[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[50];
    printf("Enter a string:");
    gets(arr);

    int c=findlength(arr);
    printf("\nLenght of the string is %d.",c);

}
