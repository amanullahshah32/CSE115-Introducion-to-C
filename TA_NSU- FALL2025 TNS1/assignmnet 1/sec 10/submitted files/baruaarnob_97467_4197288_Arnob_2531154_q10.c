#include <stdio.h>
void Replace(char s[],char o,char n){
for(int i=0;s[i]!='\0';i++)if(s[i]==o)s[i]=n;}
int main(){char s[100],o,n;gets(s);
scanf(" %c %c",&o,&n);Replace(s,o,n);puts(s);}
