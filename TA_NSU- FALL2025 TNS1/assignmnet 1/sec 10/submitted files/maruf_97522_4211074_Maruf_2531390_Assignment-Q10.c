#include<stdio.h>
void Replace(char arr[],char oldChar,char newChar){
    int i,j;
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==oldChar){
            arr[i]=newChar;
        }
    }
    puts(arr);
}

int main(){
    char arr[100];
    char m,n;
    printf("Enter a string:");
    gets(arr);
    printf("Enter character to replace:");
    scanf(" %c",&m);
    printf("Enter character to replace with:");
    scanf(" %c",&n);
    Replace(arr,m,n);

}
