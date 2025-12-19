#include<stdio.h>
int main(){
    char s[100];
    int i,l=0,p=1;
    scanf(" %[^\n]",s);
    while(s[l]) l++;
    for(i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
            p=0;
            break;
        }
    }
    if(p) printf("Palindrome");
    else printf("Not Palindrome");
}