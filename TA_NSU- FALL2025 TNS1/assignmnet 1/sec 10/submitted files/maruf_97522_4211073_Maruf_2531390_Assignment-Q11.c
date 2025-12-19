#include<stdio.h>
void rem(char arr[]){
    int i,j;
    char brr[50];
    for(i=0,j=0;arr[i]!='\0';i++){
        if((arr[i]>='a'&& arr[i]<='z')||(arr[i]>='A' && arr[i]<='Z')){
            brr[j]=arr[i];
            j++;
        }

    }
    brr[j]='\0';
    printf("New string:");
    puts(brr);
}
int main(){
    char arr[50];
    printf("Enter a string:");
    gets(arr);
    rem(arr);
}

