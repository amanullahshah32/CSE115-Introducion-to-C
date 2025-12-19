#include<stdio.h>
void Replace(char a[],char o,char n){
    int i;
    for(i=0;a[i];i++) if(a[i]==o) a[i]=n;
}
int main(){
    char s[100],o,n;
    scanf(" %[^\n]",s);
    scanf(" %c %c",&o,&n);
    Replace(s,o,n);
    printf("%s",s);
}