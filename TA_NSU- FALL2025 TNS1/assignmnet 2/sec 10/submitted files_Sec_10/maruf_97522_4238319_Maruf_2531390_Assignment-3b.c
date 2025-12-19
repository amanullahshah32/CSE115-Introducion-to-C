#include<stdio.h>
int findlength (char *s)
{
    int count=0;
    while(*s!='\0')
    {
        count++;
        *s++;
    }
    return count;
}

int main()
{
    char arr[50];
    printf("Enter a string:");
    gets(arr);
    char *ptr=arr;
    int c=findlength(ptr);
    printf("\nLenght of the string is %d.",c);

}
