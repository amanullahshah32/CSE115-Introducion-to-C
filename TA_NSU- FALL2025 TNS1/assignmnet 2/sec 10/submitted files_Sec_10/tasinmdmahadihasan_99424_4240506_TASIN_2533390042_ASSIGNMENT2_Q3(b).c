#include<stdio.h>
int findlength(char *s)
{
   int count=0;
   while(*s != '\0' && *s != '\n')
   {
       count++;
       s++;
   }
   return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int length=findlength(str);
    printf("The length of the string is: %d", length);
    return 0;
}
