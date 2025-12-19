#include<stdio.h>
#include<ctype.h>
int main()
{
char str[100];
int i;
printf("Enter a string with special symbols, characters and numbers: ");
gets(str);
printf("The alphabets are: ");
for(i=0; str[i] != '\0'; i++)
{
    if(isalpha(str[i]))
       printf("%c", str[i]);
}
return 0;
}
