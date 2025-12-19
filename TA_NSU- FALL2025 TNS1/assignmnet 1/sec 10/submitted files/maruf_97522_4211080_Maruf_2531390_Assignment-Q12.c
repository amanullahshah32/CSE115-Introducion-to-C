#include<stdio.h>
int main(){
    char a[100],b[50];
    printf("Enter string 'a':");
    gets(a);
    printf("Enter string 'b':");
    gets(b);
    int i,j;
    int n=0,m=0;
    for(i=0;a[i]!='\0';i++){
        n++;
    }
    for(i=0;b[i]!='\0';i++){
        m++;
    }
    for(j=n,i=0;j<n+m;j++,i++){
        a[j]=b[i];
    }
    a[j]='\0';
    printf("After joining, first string is:");
    puts(a);

}

