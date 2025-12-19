#include<stdio.h>
#include<string.h>
int main()
{
char character[100]={0}, str[100];
int i, j;

printf("Enter string: ");
gets(str);

for(i=0; str[i]!='\0'; i++)
  {
    character[str[i]]=1;
  }

printf("The unique elements are:");
for(j=0; j<100; j++)
  {
    if(character[j]==1)
    printf(" %c", j);
  }
 return 0;
}
