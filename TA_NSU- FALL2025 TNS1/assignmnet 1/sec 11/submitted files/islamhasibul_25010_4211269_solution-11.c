#include<stdio.h>
int main(){
    char s[100],r[100];
    int i,j=0;
    scanf(" %[^\n]",s);
    for(i=0;s[i];i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            r[j++]=s[i];
    }
    r[j]='\0';
    printf("%s",r);
}