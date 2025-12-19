#include<stdio.h>

int findlength(char s[]){
    int i=0;
    while(s[i]!='\0') i++;
    return i;
}

int findlength2(char *s){
    int i=0;
    while(*(s+i)!='\0') i++;
    return i;
}

int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]=0;
    printf("%d\n%d",findlength(str),findlength2(str));
    return 0;
}