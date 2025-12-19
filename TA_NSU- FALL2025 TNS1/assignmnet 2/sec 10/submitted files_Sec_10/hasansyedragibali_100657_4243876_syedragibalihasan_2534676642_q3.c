#include<stdio.h>

int findlength(char s[]){
int i;
while(s[i]!='\0')
{
 i++;
}
return i;
}
int findlength(char *s){
 int count = 0;

    while(*s != '\0') {
        count++;
        s++;
    }
return count;

}

void main(){

char a[100];
printf("Enter string:\n");
gets(a);
printf("Size of string is: %d", findlength(a));





}
