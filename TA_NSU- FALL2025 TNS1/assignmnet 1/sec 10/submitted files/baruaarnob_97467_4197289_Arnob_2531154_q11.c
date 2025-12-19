#include <stdio.h>
int main(){char s[200],o[200];gets(s);int j=0;
for(int i=0;s[i];i++)if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))o[j++]=s[i];
o[j]=0;puts(o);}
