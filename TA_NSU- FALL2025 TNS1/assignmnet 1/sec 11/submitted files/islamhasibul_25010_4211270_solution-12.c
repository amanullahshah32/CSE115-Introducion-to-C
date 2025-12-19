#include<stdio.h>
int main(){
    char A[100],B[50];
    int i=0,j=0;
    scanf(" %[^\n]",A);
    scanf(" %[^\n]",B);
    while(A[i]) i++;
    while(B[j]){
        A[i]=B[j];
        i++;
        j++;
    }
    A[i]='\0';
    printf("After joining, first string is: %s",A);
}